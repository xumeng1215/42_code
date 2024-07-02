/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu / Charlie <charlie_xumeng@hotmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:00:32 by mexu / Char       #+#    #+#             */
/*   Updated: 2024/07/02 16:53:45 by mexu / Char      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

void    malloc_error(void)
{
    perror("problem with malloc");
    exit(EXIT_FAILURE);
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