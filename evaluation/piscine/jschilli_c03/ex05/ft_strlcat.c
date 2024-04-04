/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschilli <jschilli@student.42.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:33:54 by jschilli          #+#    #+#             */
/*   Updated: 2023/12/05 10:23:33 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	length;

	i = 0;
	while (dest[i] != '\0')
		i++;
	length = 0;
	while (src[length] != '\0')
		length++;
	if (size <= i)
		length += size;
	else
		length += i;
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (length - 1);
}

#include <string.h>
int	main(void)
{
	char	str1[1024] = "Cool";
	char	str2[1024] = "Beans";

	printf ("string 1 = %s\n", str1);
	printf ("string 2 = %s\n", str2);
	printf ("theirs = %lu\n", strlcat(str1, str2, 6));
	printf ("combine = %u\n", ft_strlcat(str1, str2, 6));
	return (0);
}

