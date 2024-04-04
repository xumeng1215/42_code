/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschilli <jschilli@student.42.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:32:01 by jschilli          #+#    #+#             */
/*   Updated: 2024/03/19 15:03:05 by jschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(int n)
{
	int	len;

	len = 0;
	if (n < 1)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static long long	ft_static(long long n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

static char	*str_new(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	unsigned int	nb;
	int				len;
	char			*str;

	len = length(n);
	str = str_new(len);
	if (!str)
		return (NULL);
	*(str + len) = '\0';
	nb = ft_static(n);
	while (len--)
	{
		*(str + len) = 48 + nb % 10;
		nb /= 10;
	}
	if (n < 0)
		*(str) = '-';
	return (str);
}
/*
int	main()
{
	int	a = 143240;
	int	b = 0;
	int	c = -21343244;

	printf("%s\n", ft_itoa(a));
	printf("%s\n", ft_itoa(b));
	printf("%s\n", ft_itoa(c));
	return (0);
}*/
