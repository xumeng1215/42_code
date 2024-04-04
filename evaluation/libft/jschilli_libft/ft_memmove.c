/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschilli <jschilli@student.42.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:53:37 by jschilli          #+#    #+#             */
/*   Updated: 2024/03/19 14:36:03 by jschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*ptr;

	ptr = dst;
	if (!src && !dst)
		return (NULL);
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (len--)
			((char *)dst)[len] = ((char *)src)[len];
	}
	else
	{
		while (len--)
			*(char *)dst++ = *(char *)src++;
	}
	return (ptr);
}
/*
int	main(void)
{
	char	str[] = "hello! ye";
	char	dest[100];

	ft_memmove((char *)dest, (const char*)str, 10);
	printf("dest is now : %s\n", str);
	return (0);
}*/
