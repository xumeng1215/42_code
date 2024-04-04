/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lessisters <lessisters@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:37:01 by lcharrie          #+#    #+#             */
/*   Updated: 2024/03/10 18:18:48 by lessisters       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		count;

	count = 0;
	s2 = NULL;
	while (s1[count])
		count++;
	s2 = malloc(sizeof(char) * (count + 1));
	if (s2 == NULL)
		return (NULL);
	count = 0;
	while (s1[count])
	{
		s2[count] = s1[count];
		count++;
	}
	s2[count] = '\0';
	return (s2);
}

// int	main(void)
// {
// 	char str1[] = "Hello";
// 	char str2[] = "Hello";

// 	printf("rep = %s\n", strdup(str1));
// 	printf("rep = %s\n", ft_strdup(str2));
// 	return (0);
// }
