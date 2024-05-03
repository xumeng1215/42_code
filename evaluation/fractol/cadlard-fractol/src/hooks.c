/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:14:59 by cadlard           #+#    #+#             */
/*   Updated: 2024/05/02 12:12:10 by cadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>

#include <fractol.h>
#include <structs.h>
#include <input.h>

int	loop_hook(t_vars *vars)
{
	if (vars->need_rerender)
	{
		fractol_set(vars);
		mlx_put_image_to_window(vars->mlx, vars->win, vars->img->img, 0, 0);
	}
	return (0);
}

int	key_hook(int keycode, t_vars *vars)
{
	if (keycode == ESCAPE_KEYCODE)
	{
		exit_cleanly(vars);
	}
	handle_movement(keycode, vars);
	return (0);
}

int	mouse_hook(int mousecode, int x, int y, t_vars *vars)
{
	(void)x;
	(void)y;
	handle_zoom(mousecode, vars);
	return (0);
}
