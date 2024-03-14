/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthompso <pthompso@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:57:22 by pthompso          #+#    #+#             */
/*   Updated: 2024/03/11 16:57:33 by pthompso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./libft.h"
#include <stdio.h>

static size_t	ft_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	char	*rr;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	res = malloc(ft_min(len, ft_strlen(s) - start) + 1);
	rr = res;
	if (res == NULL)
		return (NULL);
	s += start;
	while (*s && len--)
		*res++ = *s++;
	*res = '\0';
	return (rr);
}
