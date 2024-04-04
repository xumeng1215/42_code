/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabulanh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:01:28 by mabulanh          #+#    #+#             */
/*   Updated: 2023/11/29 11:15:30 by mabulanh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	char			*orig;

	orig = dest;
	i = 0;
	while (*src && i < n)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	while (i < n)
	{
		*dest = '\0';
		dest++;
		i++;
	}
	return (orig);
}
/*
#include <unistd.h>
#include <string.h>

int	main(void)
{
	char word1[] = "hello";
	char word2[5];

	ft_strncpy(word2, word1, 3);
	write(1, word1, 5);
   	write(1, word2, 5);
	strncpy(word2, word1, 3);
	write(1, "\n", 1);
	write(1, word1, 5);
	write(1, word2, 5);
	return(0);
}	
*/
