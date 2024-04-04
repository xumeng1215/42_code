/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharrie <lcharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:19:31 by lcharrie          #+#    #+#             */
/*   Updated: 2024/03/09 17:13:23 by lcharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;

	count = 0;
	if (!dstsize)
		return (ft_strlen(src));
	while (count < (dstsize - 1) && src[count])
	{
		dst[count] = src[count];
		count++;
	}
	dst[count] = '\0';
	return (ft_strlen(src));
}

// int	main(void)
// {
// 	char 	dst[] = "hello";
// 	char 	src[] = "aaaa";

// 	printf("cp = %zu\n", strlcpy(dst, src, 0));
// 	printf("cp = %zu\n", ft_strlcpy(dst, src, 0));
// 	return (0);
// }
