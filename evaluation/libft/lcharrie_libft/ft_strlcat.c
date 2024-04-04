/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharrie <lcharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 10:42:23 by lcharrie          #+#    #+#             */
/*   Updated: 2024/03/09 19:09:54 by lcharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	count2;

	count = ft_strlen(dst);
	count2 = 0;
	if (dstsize < ft_strlen(dst) || dstsize == 0)
		return (dstsize + ft_strlen(src));
	while (src[count2] && count + count2 < dstsize - 1)
	{
		dst[count + count2] = src[count2];
		count2++;
	}
	dst[count + count2] = '\0';
	return (count + ft_strlen(src));
}

// int	main(void)
// {
// 	char dest1[45]; memset(dest1, 0, 30);
// 	char * src1 = (char *)"AAAAAAAAA";
// 	char dest2[30]; memset(dest2, 0, 30);
// 	char * src2 = (char *)"AAAAAAAAA";

// 	printf("rep = %lu\n", strlcat(dest1, src1, 40));
// 	printf("rep = %lu\n", ft_strlcat(dest2, src2, 40));
// 	return (0);
// }
