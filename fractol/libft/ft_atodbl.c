/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atodbl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu / Charlie <charlie_xumeng@hotmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 00:02:31 by mexu / Char       #+#    #+#             */
/*   Updated: 2024/07/03 00:17:57 by mexu / Char      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//convert a string like 123.456 to double
double	ft_atodbl(char *str)
{
	double	result;
	double	pow;
	int		sign;

	result = 0;
	sign = 1;
	pow = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str != '.' && *str)
		result = (result * 10) + (*str++ - '0');
	if (*str == '.')
		str++;
	while (*str != '\0')
	{
		pow /= 10;
		result += (*str++ - '0') * pow;
	}
	return (sign * result);
}
