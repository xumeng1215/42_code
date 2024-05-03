/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_generators.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 15:49:04 by cadlard           #+#    #+#             */
/*   Updated: 2024/04/29 13:03:38 by cadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <colors.h>
#include <fractol.h>

t_hsv	new_hsv(double h, double s, double v)
{
	t_hsv	new;

	new.h = h;
	new.s = s;
	new.v = v;
	return (new);
}

void	around_the_wheel(int *colors, int colors_len)
{
	int	i;

	i = 0;
	while (i < colors_len)
	{
		colors[i] = rgb_to_color(hsv_to_rgb(interpolate_hsv(
						new_hsv(240.0 / 360.0, 1.0, 1.0),
						new_hsv(0.0 / 360.0, 1.0, 1.0),
						(double)i / (double)colors_len,
						1
						)));
		i++;
	}
	colors[MAX_ITERS] = 0;
}

/*
void	black_to_lblue_to_white(int *colors, int colors_len)
{
	int	i;
	int	j;

	i = 0;
	while (i < (colors_len * 5.0 / 6.0))
	{
		colors[i] = rgb_to_color(hsv_to_rgb(interpolate_hsv(
						new_hsv(0.5, 1.0, 0.0),
						new_hsv(0.5, 1.0, 1.0),
						((double)i / ((double)colors_len * 5.0 / 6.0)),
						0
						)));
		i++;
	}
	j = 0;
	while (j < (colors_len * 1.0 / 6.0))
	{
		colors[i] = rgb_to_color(hsv_to_rgb(interpolate_hsv(
						new_hsv(0.5, 1.0, 1.0),
						new_hsv(0.5, 0.0, 1.0),
						((double)j / ((double)colors_len * 1.0 / 6.0)),
						0
						)));
		i++;
		j++;
	}
	colors[MAX_ITERS] = 0;
}

void	white_to_pink(int *colors, int colors_len)
{
	int	i;

	i = 0;
	while (i < colors_len)
	{
		colors[i] = rgb_to_color(hsv_to_rgb(interpolate_hsv(
						new_hsv(0.85, 0.15, 1.0),
						new_hsv(0.85, 0.5, 1.0),
						(double)i / (double)colors_len,
						0
						)));
		i++;
	}
}
*/
