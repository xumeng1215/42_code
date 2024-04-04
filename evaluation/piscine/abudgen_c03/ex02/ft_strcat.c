/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abudgen <abudgen@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:08:29 by abudgen           #+#    #+#             */
/*   Updated: 2023/11/30 13:16:34 by abudgen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char	*dest, char	*src)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[l] != '\0' )
	{
		dest[i] = src[l];
		l++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	s1[20] = "Goodmorning";
	char	s2[] = " World!";
	//char	*ptr;

		printf("%s\n", ft_strcat(s1, s2));
		
		//ptr = strcat (s1, " jerry!");
		//printf("real strcat = %s\n", s1);
}*/
