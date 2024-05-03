/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:06:21 by cadlard           #+#    #+#             */
/*   Updated: 2024/04/29 12:29:10 by cadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <structs.h>
#include <windefs.h>
#include <image.h>
#include <mandelbrot.h>
#include <julia.h>

void	fractol(t_complex c, int x, int y, t_vars *vars)
{
	int	color;

	color = 0;
	if (vars->fractol == 'm')
		color = vars->colors[mandelbrot(c)];
	else if (vars->fractol == 'j')
		color = vars->colors[julia(c, vars->julia_params)];
	set_pix(vars->img, x, y, color);
}

void	fractol_set(t_vars *vars)
{
	t_complex	c;
	double		x_factor;
	double		y_factor;
	int			y;
	int			x;

	y = 0;
	x_factor = (vars->xzoom.end - vars->xzoom.start) / (WIDTH - 1);
	y_factor = (vars->yzoom.end - vars->yzoom.start) / (HEIGHT - 1);
	while (y < HEIGHT)
	{
		c.y = vars->yzoom.end - y * y_factor;
		x = 0;
		while (x < WIDTH)
		{
			c.x = vars->xzoom.start + x * x_factor;
			fractol(c, x, y, vars);
			x++;
		}
		y++;
	}
}
