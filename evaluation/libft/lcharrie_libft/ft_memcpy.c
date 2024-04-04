/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharrie <lcharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:59:13 by lcharrie          #+#    #+#             */
/*   Updated: 2024/03/09 19:52:48 by lcharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	count;

	count = 0;
	if (!dst && !src)
		return (0);
	while (count < n)
	{
		((char *)dst)[count] = ((char *)src)[count];
		count++;
	}
	return (dst);
}

// int	main(void)
// {
// 	size_t		n;
// 	char		dst[50] = "memmmm";
// 	const char	src[50] = "abcdefg";

// 	n = 3;
// 	printf("rep = %s\n", memcpy(dst, src, n));
// 	printf("rep = %s\n", ft_memcpy(dst, src, n));
// 	return (0);
// }
