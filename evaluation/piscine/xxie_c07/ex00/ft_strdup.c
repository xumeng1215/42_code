/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxie <xxie@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:46:02 by xxie              #+#    #+#             */
/*   Updated: 2023/12/03 14:18:14 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dst;

	i = 0;
	dst = (char *)malloc(ft_strlen(src) * 1 + 1);
	if (!dst)
		return (0);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int main()
{
	char	*src;
	char	*dst;

	src = "hello world!";
	printf("%s-->%p\n", src, src);

	dst = strdup(src);
	printf("%s-->%p\n",dst, dst);

	dst = ft_strdup(src);
	printf("%s-->%p\n",dst,dst);
}

