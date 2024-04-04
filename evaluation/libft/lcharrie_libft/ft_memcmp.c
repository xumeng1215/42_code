/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharrie <lcharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 12:32:07 by lcharrie          #+#    #+#             */
/*   Updated: 2024/03/08 15:43:04 by lcharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			count;
	unsigned char	*s3;
	unsigned char	*s4;

	count = 0;
	s3 = (unsigned char *)s1;
	s4 = (unsigned char *)s2;
	while (count < n)
	{
		if (s3[count] != s4[count])
			return (s3[count] - s4[count]);
		count++;
	}
	return (0);
}

// int	main(void)
// {
// 	char s1[] = "abcz";
// 	char s2[] = "abce";
// 	int	n;

// 	n = 4;
// 	printf("rep = %d\n", memcmp(s1, s2, n));
// 	printf("rep = %d\n", ft_memcmp(s1, s2, n));
// 	return (0);
// }
