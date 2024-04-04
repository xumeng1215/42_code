/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharrie <lcharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:33:07 by lcharrie          #+#    #+#             */
/*   Updated: 2024/03/07 13:30:34 by lcharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// int	main(void)
// {
// 	char	str[10] = "Helloyouu";
// 	char	str2[10] = "Helloyouu";
// 	size_t	n;

// 	n = 2;
// 	ft_bzero(str, n);
// 	ft_bzero(str2, n);
// 	printf("rep = %s\n", str);
// 	printf("rep = %s\n", str2);
// 	return (0);
// }
