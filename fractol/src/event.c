/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu / Charlie <charlie_xumeng@hotmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:31:32 by mexu / Char       #+#    #+#             */
/*   Updated: 2024/07/03 13:04:40 by mexu / Char      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

// exit program when press ESC or the x button
int close_handler(t_fractol *f)
{
    mlx_destroy_image(f->mlx_connection, f->img.img_ptr);
    mlx_destroy_window(f->mlx_connection, f->mlx_window);
    mlx_destroy_display(f->mlx_connection);
    free(f->mlx_connection);
    exit(EXIT_SUCCESS);
}

int key_handler(int keysym, t_fractol *f)
{
    printf("key %d\n", keysym);
    
    if (keysym == XK_Escape)
        close_handler(f);
    if (keysym == XK_Left)
        f->shift_x += (0.25 * f->zoom);
    else if (keysym == XK_Right)
        f->shift_x -= (0.25 * f->zoom);
    else if (keysym == XK_Up)
        f->shift_y -= (0.25 * f->zoom);
    else if (keysym == XK_Down)
        f->shift_y += (0.25 * f->zoom);
    else if (keysym == XK_plus)
        f->iteration_limit += 10;
    else if (keysym == XK_minus)
        f->iteration_limit -= 10;

    fractal_render(f);
    return 0;
}

int mouse_handler(int button, int x, int y, t_fractol *f)
{
    printf("mouse %d\n", button);
    if(button == Button5)
        f->zoom *=1.05;
    else if (button == Button4)
        f->zoom *= 0.95;
    fractal_render(f);
    return 0;
}

int julia_track(int x, int y, t_fractol *f)
{
    if(!ft_strncmp(f->name, "julia", 5))
    {
        f->julia_k.x = scale_map(x, -2, 2, 0, WIDTH)*f->zoom + f->shift_x;
        f->julia_k.y = scale_map(y, 2, -2, 0, HEIGHT)*f->zoom + f->shift_y;
        fractal_render(f);
    }
}