/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharrie <lcharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:18:59 by lessisters        #+#    #+#             */
/*   Updated: 2024/03/15 15:24:38 by lcharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		count;
	int		count2;

	if (!s1 || !s2)
		return (0);
	count = 0;
	count2 = 0;
	s3 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (s3 == NULL)
		return (NULL);
	while (s1[count])
		s3[count2++] = s1[count++];
	count = 0;
	while (s2[count])
		s3[count2++] = s2[count++];
	s3[count2] = '\0';
	return (s3);
}

//int	main(void)
//{
//	printf("rep = %s\n", ft_strjoin("Hello", "you"));
//	return (0);
//}