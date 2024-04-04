/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharrie <lcharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:56:53 by lcharrie          #+#    #+#             */
/*   Updated: 2024/03/07 16:28:15 by lcharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	while ((unsigned char)s1[count] == (unsigned char)s2[count]
		&& count < n && s1[count])
		count++;
	if ((unsigned char)s1[count] < (unsigned char)s2[count] && count < n)
		return (-1);
	else if ((unsigned char)s1[count] > (unsigned char)s2[count] && count < n)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("rep = %d\n", strncmp("", "", 1));
// 	printf("rep = %d\n", ft_strncmp("", "", 1));
// 	return (0);
// }
