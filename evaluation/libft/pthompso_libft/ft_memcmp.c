/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthompso <pthompso@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:11:12 by pthompso          #+#    #+#             */
/*   Updated: 2024/03/10 19:11:13 by pthompso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str1;
	const char	*str2;

	str1 = (const char *) s1;
	str2 = (const char *) s2;
	while (n--)
	{
		if (*str1 != *str2)
			return ((unsigned char) *str1 - (unsigned char) *str2);
		str1++;
		str2++;
	}
	return (0);
}
