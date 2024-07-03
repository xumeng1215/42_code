/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu / Charlie <charlie_xumeng@hotmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:26:55 by mexu / Char       #+#    #+#             */
/*   Updated: 2024/07/03 12:56:04 by mexu / Char      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

// scale down or up with numbers range
double scale_map(double num, double new_min, double new_max, double old_min, double old_max)
{
    return ((new_max-new_min)/(old_max-old_min))*(num -old_min) + new_min;
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