/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:26:54 by cadlard           #+#    #+#             */
/*   Updated: 2024/04/29 12:27:17 by cadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <structs.h>
#include <fractol.h>

// z = c
int	julia(t_complex z, t_complex k)
{
	int			i;
	double		x2;
	double		y2;

	x2 = z.x * z.x;
	y2 = z.y * z.y;
	i = 0;
	while (x2 + y2 <= ESCAPE_RADIUS_2 && i < MAX_ITERS)
	{
		z.y = 2 * z.x * z.y + k.y;
		z.x = x2 - y2 + k.x;
		x2 = z.x * z.x;
		y2 = z.y * z.y;
		i++;
	}
	return (i);
}
