/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:55:36 by cadlard           #+#    #+#             */
/*   Updated: 2024/04/29 12:26:40 by cadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <structs.h>
#include <fractol.h>

int	mandelbrot(t_complex c)
{
	int			i;
	t_complex	z;
	double		x2;
	double		y2;

	z.x = c.x;
	z.y = c.y;
	x2 = z.x * z.x;
	y2 = z.y * z.y;
	i = 0;
	while (x2 + y2 <= ESCAPE_RADIUS_2 && i < MAX_ITERS)
	{
		z.y = 2 * z.x * z.y + c.y;
		z.x = x2 - y2 + c.x;
		x2 = z.x * z.x;
		y2 = z.y * z.y;
		i++;
	}
	return (i);
}
