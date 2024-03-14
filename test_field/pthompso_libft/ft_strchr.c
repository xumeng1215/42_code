/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthompso <pthompso@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:12:41 by pthompso          #+#    #+#             */
/*   Updated: 2024/03/10 19:12:42 by pthompso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s && (*s != (unsigned char) c))
		s++;
	if (*s == (unsigned char) c)
		return ((char *) s);
	if (c == 0)
		return ((char *) s);
	return (NULL);
}
