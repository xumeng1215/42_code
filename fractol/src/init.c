/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu / Charlie <charlie_xumeng@hotmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:00:32 by mexu / Char       #+#    #+#             */
/*   Updated: 2024/07/03 12:23:37 by mexu / Char      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void    malloc_error(void)
{
    printf("problem with malloc\n");
    exit(EXIT_FAILURE);
}

static void data_init(t_fractol *f)
{
    f->escape_value = 4;
    f->iteration_limit = 60;
    f->shift_x = 0.0;
    f->shift_y =0.0;
    f->zoom = 1.0;
}

static void event_init(t_fractol *f)
{
    mlx_hook(f->mlx_window, KeyPress, KeyPressMask, key_handler, f);
    mlx_hook(f->mlx_window, ButtonPress, ButtonPressMask, mouse_handler, f);
    mlx_hook(f->mlx_window, DestroyNotify, StructureNotifyMask, close_handler, f);
    mlx_hook(f->mlx_window, MotionNotify, PointerMotionMask, julia_track, f);
}

void    fractal_init(t_fractol *f)
{  
    f->mlx_connection = mlx_init();
    if (NULL == f->mlx_connection)
        malloc_error();
    f->mlx_window = mlx_new_window(f->mlx_connection, WIDTH, HEIGHT, f->name);
    if (NULL == f->mlx_window)
    {
        mlx_destroy_display(f->mlx_connection);
        free(f->mlx_connection);
        malloc_error();
    }
    f->img.img_ptr = mlx_new_image (f->mlx_connection, WIDTH, HEIGHT);
    if(NULL == f->img.img_ptr)
    {
        mlx_destroy_window(f->mlx_connection, f->mlx_window);
        mlx_destroy_display(f->mlx_connection);
        free(f->mlx_connection);
        malloc_error();
    }
    f->img.pixels_ptr = mlx_get_data_addr(f->img.img_ptr, &f->img.bpp, &f->img.line_length, &f->img.endian);
    event_init(f);
    data_init(f);    
}