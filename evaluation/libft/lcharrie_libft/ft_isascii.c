/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharrie <lcharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:00:16 by lcharrie          #+#    #+#             */
/*   Updated: 2024/03/06 16:57:39 by lcharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 0177)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("rep = %d\n", isascii(100000));
// 	printf("rep = %d\n", ft_isascii(100000));
// 	return (0);
// }
