/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 11:22:06 by cadlard           #+#    #+#             */
/*   Updated: 2024/05/02 14:40:47 by cadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORS_H
# define COLORS_H

# include <structs.h>

int		create_colors(int **colors, char fractol);

t_hsv	interpolate_hsv(t_hsv c1, t_hsv c2, double fraction, int dir);

t_hsv	new_hsv(double h, double s, double v);

t_rgb	color_to_rgb(int color);
t_hsv	rgb_to_hsv(t_rgb rgb);
t_rgb	hsv_to_rgb(t_hsv hsv);
int		rgb_to_color(t_rgb rgb);

// void	black_to_lblue_to_white(int *colors, int colors_len);
// void	white_to_pink(int *colors, int colors_len);
void	around_the_wheel(int *colors, int colors_len);

#endif
