/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:47:30 by mexu              #+#    #+#             */
/*   Updated: 2023/11/30 10:59:18 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

/*
int	main(void)
{
	char *src = "heloooo";
	char dest[20] = ":::";

	printf("return %s\n", strcat(dest, src));
	printf("return %s\n", ft_strcat(dest, src));
	return (0);
}
*/

char	*ft_strcat(char *dest, char *src)
{
	char	*temp;

	temp = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src ++;
		dest++;
	}
	*dest = '\0';
	return (temp);
}
