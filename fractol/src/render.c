/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu / Charlie <charlie_xumeng@hotmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:18:55 by mexu / Char       #+#    #+#             */
/*   Updated: 2024/07/03 12:56:47 by mexu / Char      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

//?
static void my_pixel_put(int x, int y, t_img *img, int color)
{
    int offset;
    offset = (y * img->line_length) + (x * (img->bpp / 8));
    *(unsigned int *)(img->pixels_ptr + offset) = color;
}

// fractal set calculation triage function
// will return the iteration numbers until z escape
int calc_iteration(t_fractol *f, t_complex z)
{
    int iteration_number;

    if (!ft_strncmp(f->name, "julia", 5))
        iteration_number = calc_julia(f, z);
    else if (!ft_strncmp(f->name, "mandelbrot", 10))
        iteration_number = calc_mandelbrot(f, z);
    else
        iteration_number = calc_tricorn(f, z);

    return iteration_number;
}

// loop through all the pixels inside of the window
// each pixel inside of the window will map to a complex number z
// set the color of this pixel by calculating z in the fracal set or not
// set color according to the iterations number until escape the set
// then set the pixel's color
// after all the pixels' color are set after the loop
// put the image to window
void fractal_render(t_fractol *f)
{
    int x;
    int y;
    t_complex z;
    int color;

    y = -1;
    while (++y < HEIGHT)
    {
        x = -1;
        while (++x < WIDTH)
        {
            z.x = (scale_map(x, -2, 2, 0, WIDTH) * f->zoom) + f->shift_x;
            z.y = (scale_map(y, 2, -2, 0, HEIGHT) * f->zoom) + f->shift_y;
            // printf("%f    %f\n", z.x, z.y);
            color = scale_map(calc_iteration(f, z), BLACK, WHITE, 0, f->iteration_limit);
            // printf("color is %d\n", color);
            my_pixel_put(x, y, &f->img, color);
        }
    }
    mlx_put_image_to_window(f->mlx_connection, f->mlx_window, f->img.img_ptr, 0, 0);
}
