/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_set.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu / Charlie <charlie_xumeng@hotmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 22:29:53 by mexu / Char       #+#    #+#             */
/*   Updated: 2024/07/02 23:28:15 by mexu / Char      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

// giving a complex number z, return the iteration n
// when consider the number escape julia set
int calc_julia(t_fractol *f, t_complex z)
{
    int n;

    n = 0;
    while (n < MAX_ITERATION)
    {
        if (magnitude_squared(z) > f->escape_value)
            break;
        z = sum_complex(square_complex(z), f->julia_k);
        n++;
    }
    return n;
}

// calculate if the giving complex number c is in a mandelbrot set or not
// return the iteration n when it's considered escaped
int calc_mandelbrot(t_fractol *f, t_complex c)
{
    t_complex z;
    int n;

    z.x = 0;
    z.y = 0;
    n = 0;
    while (n < MAX_ITERATION)
    {
        if (magnitude_squared(z) > f->escape_value)
            break;
        z = sum_complex(square_complex(z), c);
        n++;
    }
    return n;
}

int calc_tricorn(t_fractol *f, t_complex c)
{
    int n;
    t_complex z;

    z = c;
    n = 0;
    while (n < MAX_ITERATION)
    {
        if (magnitude_squared(z) > f->escape_value)
            break;
        z = sum_complex(tricorn_iteration(z), c);
        n++;
    }
    return n;
}

t_complex tricorn_iteration(t_complex z)
{
    t_complex result;

    result.x = z.x * z.x - z.y * z.y;
    result.y = -2 * z.x * z.y;

    return result;
}
