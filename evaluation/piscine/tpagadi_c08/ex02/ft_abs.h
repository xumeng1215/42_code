/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lunarseong <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 07:41:14 by lunarseong        #+#    #+#             */
/*   Updated: 2023/12/01 08:18:29 by lunarseong       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) \
    ({ \
        int abs_value = (Value); \
        if (abs_value < 0) { \
            abs_value = -abs_value; \
        } \
        abs_value; \
    })

#endif
