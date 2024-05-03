/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors_helpers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:24:56 by cadlard           #+#    #+#             */
/*   Updated: 2024/05/02 14:39:27 by cadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <colors.h>

static void	set_rgb(t_rgb *rgb, double r, double g, double b)
{
	rgb->r = r;
	rgb->g = g;
	rgb->b = b;
}

static double	rgb_to_hsv_hue(t_rgb rgb, double cmax, double diff)
{
	t_rgb	del_rgb;
	double	h;

	del_rgb.r = (((cmax - rgb.r) / 6.0) + (diff / 2.0)) / diff;
	del_rgb.g = (((cmax - rgb.g) / 6.0) + (diff / 2.0)) / diff;
	del_rgb.b = (((cmax - rgb.b) / 6.0) + (diff / 2.0)) / diff;
	if (rgb.r == cmax)
		h = del_rgb.b - del_rgb.g;
	else if (rgb.g == cmax)
		h = (1.0 / 3.0) + del_rgb.r - del_rgb.b;
	else
		h = (2.0 / 3.0) + del_rgb.g - del_rgb.r;
	if (h < 0.0)
		h += 1.0;
	if (h > 1.0)
		h -= 1.0;
	return (h);
}

t_hsv	rgb_to_hsv(t_rgb rgb)
{
	double	cmax;
	double	cmin;
	double	diff;
	t_hsv	hsv;

	cmax = fmax(rgb.r, fmax(rgb.g, rgb.b));
	cmin = fmin(rgb.r, fmin(rgb.g, rgb.b));
	diff = cmax - cmin;
	hsv.v = cmax;
	if (diff == 0)
	{
		hsv.h = 0.0;
		hsv.s = 0.0;
	}
	else
	{
		hsv.s = diff / cmax;
		hsv.h = rgb_to_hsv_hue(rgb, cmax, diff);
	}
	return (hsv);
}

// t_hsv d3 is just used for three doubles since norm only 
// allows up to four args to a function
static void	hsv_to_rgb_cont(t_rgb *new, int sector,
			double v, t_hsv d3)
{
	if (sector == 0)
		set_rgb(new, v, d3.v, d3.h);
	else if (sector == 1)
		set_rgb(new, d3.s, v, d3.h);
	else if (sector == 2)
		set_rgb(new, d3.h, v, d3.v);
	else if (sector == 3)
		set_rgb(new, d3.h, d3.s, v);
	else if (sector == 4)
		set_rgb(new, d3.v, d3.h, v);
	else
		set_rgb(new, v, d3.h, d3.s);
}

t_rgb	hsv_to_rgb(t_hsv hsv)
{
	t_rgb	new;
	t_hsv	d3;
	double	f;

	if (hsv.s == 0)
	{
		new.r = hsv.v;
		new.g = hsv.v;
		new.b = hsv.v;
	}
	else
	{
		hsv.h *= 6.0;
		if (hsv.h >= 6.0)
			hsv.h = 0.0;
		(void)f;
		d3.h = hsv.v * (1.0 - hsv.s);
		d3.s = hsv.v * (1.0 - hsv.s * (hsv.h - floor(hsv.h)));
		d3.v = hsv.v * (1.0 - hsv.s * (1.0 - (hsv.h - floor(hsv.h))));
		hsv_to_rgb_cont(&new, (int)hsv.h, hsv.v, d3);
	}
	return (new);
}
