/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthompso <pthompso@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:06:16 by pthompso          #+#    #+#             */
/*   Updated: 2024/03/10 19:06:17 by pthompso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./libft.h"

static unsigned short	ft_num_digits(int number)
{
	unsigned short	len;

	len = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		len++;
	while (number)
	{
		number /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*res;
	unsigned short	len;

	len = ft_num_digits(n);
	res = malloc(len + 1);
	if (n == -2147483648)
		return (ft_memcpy(res, "-2147483648\0", 12));
	if (res == NULL)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	if (n == 0)
		res[0] = '0';
	res[len] = '\0';
	while (n)
	{
		res[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (res);
}
