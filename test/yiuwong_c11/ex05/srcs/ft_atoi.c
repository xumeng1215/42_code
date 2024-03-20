/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiuwong <yiuwong@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 00:04:08 by yiuwong           #+#    #+#             */
/*   Updated: 2023/11/27 01:56:01 by yiuwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_char_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	is_char_valid(char c)
{
	if (c == ' ')
		return (1);
	if (c == '+' || c == '-')
		return (1);
	return (is_char_numeric(c));
}

int	ten_to_power(int pow)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i < pow)
	{
		result *= 10;
		i++;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int		sign;
	int		digits;
	int		result;
	int		i;
	char	buffer[10];

	digits = 0;
	sign = 1;
	while (is_char_valid(*str))
	{
		if (*str == '-')
			sign *= -1;
		else if (is_char_numeric(*str))
			buffer[digits++] = *str;
		str++;
	}
	i = 0;
	result = 0;
	while (i < digits)
	{
		result += ten_to_power(i) * (buffer[digits - i - 1] - '0');
		i++;
	}
	return (sign * result);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
	return (0);
}
*/
