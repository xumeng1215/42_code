/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebrunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:20:10 by jebrunet          #+#    #+#             */
/*   Updated: 2023/12/03 15:06:08 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	j;
	int				k;

	i = 0;
	len = 0;
	j = 0;
	while (dest[len] != '\0')
		len++;
	k = len;
	while (src[j] != '\0')
		j++;
	while (src[i] != '\0' && i < (size - len - 1))
	{
		dest[k] = src[i];
		k++;
		i++;
	}
	dest[k] = '\0';
	return (len + j);
}

int	main(void)
{
	char	dest[100] = "ceci ";
	char	*src = "Pour les piscineux Francais !";
	printf("Source: %s", src);
	printf("\nDest: %s", dest);
	unsigned int	result = ft_strlcat(dest, src, 40);
	printf("\nDest&&Source :%s \nResult sizeof: %d", dest, result);
	return (0);
}
