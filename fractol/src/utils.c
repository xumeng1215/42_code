/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu / Charlie <charlie_xumeng@hotmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:26:55 by mexu / Char       #+#    #+#             */
/*   Updated: 2024/07/02 23:42:08 by mexu / Char      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

// scale down or up with numbers range
double map(double num, double min1, double max1, double min2, double max2)
{
    double result;
    double scale;

    scale = (max2 - min2) / (max1 - min1);
    result = scale * (num - min1) + min2;
    return result;
}

// return the sum of two complex numbers
t_complex sum_complex(t_complex z1, t_complex z2)
{
    t_complex z;

    z.x = z1.x + z2.x;
    z.y = z1.y + z2.y;
    return z;
}

// return a complex number square
t_complex square_complex(t_complex z)
{
    t_complex result;

    result.x = (z.x * z.x) - (z.y * z.y);
    result.y = 2 * z.x * z.y;
    return result;
}

// return the squared magnitude of complex number z
double magnitude_squared(t_complex z)
{
    return z.x * z.x + z.y * z.y;
}