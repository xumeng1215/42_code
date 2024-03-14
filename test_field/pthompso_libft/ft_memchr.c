/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthompso <pthompso@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:08:08 by pthompso          #+#    #+#             */
/*   Updated: 2024/03/10 19:08:08 by pthompso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*sc;

	sc = (const unsigned char *) s;
	while (n--)
	{
		if (*sc == (unsigned char) c)
			return ((char *) sc);
		sc++;
	}
	return (NULL);
}
