/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 11:55:14 by yili              #+#    #+#             */
/*   Updated: 2023/12/03 10:56:56 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int main()
{
	char *s1 = "abc";
	char *s2 = "123";

	printf("%s\n", strncat(s1, s2, 2));

	return (0);
}
