/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:53:37 by mexu              #+#    #+#             */
/*   Updated: 2023/11/30 11:13:38 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

/*
int	main(void)
{
	char *src = "12345678901234567890";
	char dest[20] = "fox";

	//printf("return %lu\n", strlcat(dest, src, 10));
	printf("return %u\n", ft_strlcat(dest, src, 10));

	return (0);
}
*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int		i;

	i = 0;
	while (*dest != '\0')
	{
		dest++;
		i++;
	}
	while (*src != '\0' && size > 0)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (i);
}
