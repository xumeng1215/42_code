/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:52:28 by cadlard           #+#    #+#             */
/*   Updated: 2024/04/24 12:24:02 by cadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMAGE_H
# define IMAGE_H

# include <structs.h>

int		byte_offset(t_image *img, int x, int y);
void	set_pix(t_image *img, int x, int y, int colour);
int		argb(unsigned char a,
			unsigned char r, unsigned char g, unsigned char b);

#endif
