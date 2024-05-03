/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:14:18 by cadlard           #+#    #+#             */
/*   Updated: 2024/04/30 12:26:06 by cadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef unsigned char	t_u8;

typedef struct s_zoom
{
	double	start;
	double	end;
}			t_zoom;

typedef struct s_image
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}			t_image;

typedef struct s_complex
{
	double	x;
	double	y;
}			t_complex;

typedef struct s_vars
{
	void		*mlx;
	void		*win;
	char		fractol;
	int			*colors;
	int			colors_len;
	int			need_rerender;
	t_image		*img;
	t_zoom		xzoom;
	t_zoom		yzoom;
	t_complex	julia_params;
}				t_vars;

typedef struct s_rgb
{
	double	r;
	double	g;
	double	b;
}			t_rgb;

typedef struct s_hsv
{
	double	h;
	double	s;
	double	v;
}			t_hsv;

#endif
