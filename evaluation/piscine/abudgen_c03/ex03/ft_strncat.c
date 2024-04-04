/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abudgen <abudgen@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 13:18:43 by abudgen           #+#    #+#             */
/*   Updated: 2023/12/06 15:58:47 by abudgen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (l < nb && src[l] != '\0')
	{
		dest[i] = src[l];
		l++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest[20] = "Goodmorning";
	char	src[] = " World!";
	printf("%s\n", ft_strncat(dest, src, 4));
}*/
