/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharrie <lcharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:09:42 by lcharrie          #+#    #+#             */
/*   Updated: 2024/03/17 17:23:52 by lcharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	count;

	count = 0;
	if (c % 128 == '\0')
	{
		while (s[count])
			count++;
		return ((char *)&s[count]);
	}
	while (s[count])
	{
		if (s[count] == c % 128)
			return ((char *)&(s[count]));
		count++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char list[5] = "oojo";

// 	printf("rep = %s\n", ft_strchr("teste", 'e' + 1024));
// 	printf("rep = %s\n", strchr("teste", 'e' + 1024));
// 	return (0);
// }
