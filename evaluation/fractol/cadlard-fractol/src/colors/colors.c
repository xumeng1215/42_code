/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:21:58 by cadlard           #+#    #+#             */
/*   Updated: 2024/05/02 14:38:47 by cadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <colors.h>
#include <fractol.h>

int	rgb_to_color(t_rgb rgb)
{
	return (((int)(rgb.r * 255) << 16
		| (int)(rgb.g * 255) << 8
		| (int)(rgb.b * 255)) & 0x00FFFFFF);
}

t_rgb	color_to_rgb(int color)
{
	t_rgb	rgb;

	rgb.r = ((color >> 16) & 0xFF) / 255.0;
	rgb.g = ((color >> 8) & 0xFF) / 255.0;
	rgb.b = (color & 0xFF) / 255.0;
	return (rgb);
}

t_hsv	interpolate_hsv(t_hsv c1, t_hsv c2, double fraction, int flip_dir)
{
	t_hsv	new;
	double	ccw;
	double	cw;

	if (c1.h >= c2.h)
	{
		ccw = c1.h - c2.h;
		cw = 1.0 + c2.h - c1.h;
	}
	else
	{
		ccw = 1.0 + c1.h - c2.h;
		cw = c2.h - c1.h;
	}
	if ((cw <= ccw) ^ flip_dir)
		new.h = c1.h + (cw * fraction);
	else
		new.h = c1.h - (ccw * fraction);
	if (new.h < 0.0)
		new.h += 1.0;
	if (new.h > 1.0)
		new.h -= 1.0;
	new.s = (1 - fraction) * c1.s + fraction * c2.s;
	new.v = (1 - fraction) * c1.v + fraction * c2.v;
	return (new);
}

int	create_colors(int **colors, char fractol)
{
	int	colors_len;

	colors_len = MAX_ITERS + 1;
	*colors = ft_calloc(colors_len, sizeof(int));
	if (colors == NULL)
		return (-1);
	if (fractol == 'm')
		around_the_wheel(*colors, colors_len);
	else if (fractol == 'j')
		around_the_wheel(*colors, colors_len);
	return (colors_len);
}
/*
stripes: 
	if (i % 3 == 0)
		(*colors)[i] = 0x001C1CED;
	else if (i % 3 == 1)
		(*colors)[i] = 0x00841CED;
	else
		(*colors)[i] = 0x001C84ED;
		dd7aac fffaac df7bac

white-to-pink gradient:
while (i < colors_len)
{
	(*colors)[i] = rgb_to_color(hsv_to_rgb(interpolate_hsv(
			new_hsv(0.85, 0.15, 1.0),
			new_hsv(0.85, 0.5, 1.0),
			((double)i / ((double)colors_len - 10.0))
		)));
	i++;
}
*/
