/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.c image.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:50:11 by cadlard           #+#    #+#             */
/*   Updated: 2024/04/29 14:07:09 by cadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <structs.h>
#include <windefs.h>

// x * 4 == x * (image->bits_per_pixel / 8)
// y * WIDTH * 4 == y * img->line_length
void	set_pix(t_image *img, int x, int y, int colour)
{
	char	*dst;

	dst = img->addr + y * WIDTH * 4 + x * 4;
	*(unsigned int *)dst = colour;
}

// int	byte_offset(t_image *img, int x, int y)
// {
// 	return (y * img->line_length + x * (img->bits_per_pixel / 8));
// }

// int	argb(unsigned char a, unsigned char r, unsigned char g, unsigned char b)
// {
// 	return (a << 24 | r << 16 | g << 8 | b);
// }
