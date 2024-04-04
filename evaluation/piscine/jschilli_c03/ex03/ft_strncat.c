/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschilli <jschilli@student.42.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:32:16 by jschilli          #+#    #+#             */
/*   Updated: 2023/12/05 10:28:54 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	while (dest[i] != '\0')
		i++;
	n = 0;
	while (src[n] != '\0' && n < nb)
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main (void)
{
	char	str1[] = "Cool";
	char	str2[] = "Beans";
//	printf ("theirs = %s\n", strncat(str1, str2, 3));
	printf ("string 1 = %s\n", str1);
	printf ("string 2 = %s\n", str2);
	printf ("size = %d\n", 3);
	printf ( "combine = %s\n", ft_strncat(str1, str2, 3));
	return (0);
}

