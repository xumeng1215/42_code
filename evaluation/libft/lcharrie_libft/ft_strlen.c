/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharrie <lcharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:16:35 by lcharrie          #+#    #+#             */
/*   Updated: 2024/03/07 15:18:14 by lcharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

// int	main(void)
// {
// 	printf("rep = %lu\n", strlen("Hello"));
// 	printf("rep = %lu\n", ft_strlen("Hello"));
// 	return (0);
// }
