/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 12:21:56 by ksaidi            #+#    #+#             */
/*   Updated: 2023/12/03 16:11:33 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)

{
	int	id;

	id = 0;
	while (src[id] != '\0')
	{
		dest[id] = src[id];
		id++;
	}
	(*dest) = '\0';
	return (dest);
}
int	main(void)
{
	char *s1 = "abc";
	char *s2 = "";

	printf("%s\n", ft_strcpy(s1, s2));
	return(0);
}
