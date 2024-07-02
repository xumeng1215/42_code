/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu / Charlie <charlie_xumeng@hotmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:18:55 by mexu / Char       #+#    #+#             */
/*   Updated: 2024/07/03 00:20:38 by mexu / Char      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void    handle_pixel(int x, int y, t_fractol *f)
{
    t_complex   z;
    t_complex   c;
    int i;
    int color;

    i=0;
    
    
}


void    fractal_render(t_fractol *f)
{
    int x;
    int y;

    y = -1;
    while (++y < HEIGHT)
    {
        x = -1;
        while (++x < WIDTH)
            handle_pixel(x, y, f);
    }
    mlx_put_image_to_window(f->mlx_connection, f->mlx_window, f->img.img_ptr, 0, 0);
}