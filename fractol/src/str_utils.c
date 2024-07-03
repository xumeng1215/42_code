/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu / Charlie <charlie_xumeng@hotmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:19:51 by mexu / Char       #+#    #+#             */
/*   Updated: 2024/07/03 12:25:49 by mexu / Char      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../fractol.h"

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


int	ft_strncmp(char *s1, char *s2, int n)
{
	while (*s1 != '\0' && *s2 != '\0' && n > 0)
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	if (n > 0)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (0);
}
