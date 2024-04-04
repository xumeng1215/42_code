/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharrie <lcharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:52:59 by lcharrie          #+#    #+#             */
/*   Updated: 2024/03/08 11:28:12 by lcharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		count;
	const char	*s1;

	count = 0;
	s1 = (const char *)s;
	while (count < n)
	{
		if (s1[count] == (char)c)
			return ((void *)&s[count]);
		count++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("rep = %s\n", memchr("Helloy", 'o', 10));
// 	printf("rep = %s\n", ft_memchr("Helloy", 'o', 10));
// 	return (0);
// }
