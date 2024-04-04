/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharrie <lcharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 11:29:46 by lcharrie          #+#    #+#             */
/*   Updated: 2024/03/17 16:36:54 by lcharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (len == 0)
		return (dst);
	if (src < dst)
	{
		while (len > 0)
		{
			((char *)dst)[len - 1] = ((char *)src)[len - 1];
			len--;
		}
	}
	else
	{
		ft_memcpy(((char *)dst), ((char *)src), len);
	}
	return (dst);
}

// int	main(void)
// {
// 	char s[] = {67, 68, 67, 68, 69, 0, 45};
// 	//char s0[] = { 0,  0,  0,  0};
// 	//char sResult[] = {67, 68, 67, 68, 69, 0, 45};
// 	printf("dest = %s\n", s);
// 	printf("source = %s\n", s+1);
// 	//printf("rep normale= %s\n", memmove(s+1, s, 3));
// 	printf("ma rep = %s\n", ft_memmove(s+1, s, 3));
// 	return (0);
// }
