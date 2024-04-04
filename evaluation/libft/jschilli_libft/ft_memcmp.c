/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschilli <jschilli@student.42.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:40:31 by jschilli          #+#    #+#             */
/*   Updated: 2024/03/19 15:44:52 by jschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	if (n == 0)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (*str1 == *str2 && ++i < n)
	{
		str1++;
		str2++;
	}
	return ((int)(*str1 - *str2));
}
/*
int	main()
{
	char str1[] = "abz";
	char str2[] = "abb";
	int	i;

	i = 0;
	while (i < 4)
	{
		printf("%d\n", memcmp(str1, str2, i));
		printf("%d\n", ft_memcmp(str1, str2, i));
		i++;
	}
	return (0);
}
*/
