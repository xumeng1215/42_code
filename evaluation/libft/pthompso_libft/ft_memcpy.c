/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthompso <pthompso@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:07:53 by pthompso          #+#    #+#             */
/*   Updated: 2024/03/10 19:07:53 by pthompso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *) dest;
	s = (const char *) src;
	if (d == s)
		return (d);
	while (n--)
		*d++ = *s++;
	return (dest);
}
