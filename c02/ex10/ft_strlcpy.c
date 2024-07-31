/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:41:29 by mexu              #+#    #+#             */
/*   Updated: 2023/12/01 09:25:01 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

/*
int main(void)
{
	char source[] = "hello111111";
	char dest1[20];
	char dest2[20];

	printf("%lu\n",strlcpy(dest1, source, 3));

	printf("%d\n",ft_strlcpy(dest2, source, 3));
	
	return (0);
}
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	size = 0;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (i);
}
