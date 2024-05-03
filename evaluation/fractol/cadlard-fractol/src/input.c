/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:40:16 by cadlard           #+#    #+#             */
/*   Updated: 2024/05/02 11:21:57 by cadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>
#include <stdlib.h>
#include <input.h>

static void	calc_move_amount(double *xamount, double *yamount, t_vars *vars)
{
	*xamount = (vars->xzoom.end - vars->xzoom.start) * MOVE_MULTIPLIER;
	*yamount = (vars->yzoom.end - vars->yzoom.start) * MOVE_MULTIPLIER;
}

void	handle_movement(int keycode, t_vars *vars)
{
	double	xamount;
	double	yamount;

	calc_move_amount(&xamount, &yamount, vars);
	if (keycode == UP_ARROW)
	{
		vars->yzoom.start += yamount;
		vars->yzoom.end += yamount;
	}
	else if (keycode == DOWN_ARROW)
	{
		vars->yzoom.start -= yamount;
		vars->yzoom.end -= yamount;
	}
	else if (keycode == LEFT_ARROW)
	{
		vars->xzoom.start -= xamount;
		vars->xzoom.end -= xamount;
	}
	else if (keycode == RIGHT_ARROW)
	{
		vars->xzoom.start += xamount;
		vars->xzoom.end += xamount;
	}
	vars->need_rerender = 1;
}

void	handle_zoom(int mousecode, t_vars *vars)
{
	double	xamount;
	double	yamount;

	xamount = (vars->xzoom.end - vars->xzoom.start) * ZOOM_MULTIPLIER;
	yamount = (vars->yzoom.end - vars->yzoom.start) * ZOOM_MULTIPLIER;
	if (mousecode == SCROLL_UP)
	{
		vars->xzoom.start += xamount;
		vars->xzoom.end -= xamount;
		vars->yzoom.start += yamount;
		vars->yzoom.end -= yamount;
		vars->need_rerender = 1;
	}
	else if (mousecode == SCROLL_DOWN)
	{
		vars->xzoom.start -= xamount;
		vars->xzoom.end += xamount;
		vars->yzoom.start -= yamount;
		vars->yzoom.end += yamount;
		vars->need_rerender = 1;
	}
}

/*
these are only available on minilibx_linux for some reason?
	mlx_loop_end(vars->mlx);
	mlx_destroy_display(vars->mlx);
*/
int	exit_cleanly(t_vars *vars)
{
	mlx_destroy_image(vars->mlx, vars->img->img);
	mlx_destroy_window(vars->mlx, vars->win);
	free(vars->mlx);
	if (vars->colors != NULL)
		free(vars->colors);
	exit(0);
	return (0);
}
