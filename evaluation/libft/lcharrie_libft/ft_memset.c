/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharrie <lcharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:31:49 by lcharrie          #+#    #+#             */
/*   Updated: 2024/03/06 16:57:27 by lcharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	count;

	count = 0;
	while (count < len)
	{
		((unsigned char *)b)[count] = c;
		count++;
	}
	return (b);
}

// int	main(void)
// {
// 	char str[] = "Helloyou";
// 	char str2[] = "Helloyou";

// 	memset(str, 'a', 2);
// 	ft_memset(str2, 'a', 2);
// 	printf("rep = %s\n", str);
// 	printf("rep = %s\n", str2);
// 	return (0);
// }
