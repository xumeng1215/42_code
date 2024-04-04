/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharrie <lcharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:31:49 by lcharrie          #+#    #+#             */
/*   Updated: 2024/03/17 17:23:24 by lcharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	count;
	int	last_pos;

	count = 0;
	last_pos = -1;
	if (c % 128 == '\0')
	{
		while (s[count])
			count++;
		return ((char *)&s[count]);
	}
	while (s[count])
	{
		if (s[count] == c % 128)
			last_pos = count;
		count++;
	}
	if (last_pos >= 0)
		return ((char *)&s[last_pos]);
	return (NULL);
}

// int	main(void)
// {
// 	printf("rep = %s\n", ft_strrchr("teste", 1024 + 'e'));
// 	printf("rep = %s\n", strrchr("teste", 1024 + 'e'));
// 	return (0);
// }
