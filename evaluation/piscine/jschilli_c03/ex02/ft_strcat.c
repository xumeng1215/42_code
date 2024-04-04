/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschilli <jschilli@student.42.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:36:16 by jschilli          #+#    #+#             */
/*   Updated: 2023/12/04 17:15:36 by jschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	while (dest[i] != '\0')
		i++;
	n = 0;
	while (src[n] != '\0')
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <string.h>
int	main(void)
{
	char	str1[] = "cool";
	char	str2[] = "beans";

	printf("dest = %s\n", str1);
	printf( "src = %s\n", str2);
//	printf("strcat answer %s\n", strcat(str1, str2));
	printf("combined = %s\n", ft_strcat(str1, str2));
	return (0);
}
*/
