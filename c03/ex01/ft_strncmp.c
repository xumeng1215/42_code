/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:45:00 by mexu              #+#    #+#             */
/*   Updated: 2023/11/30 14:23:51 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

/*
int main(void)
{
	char *s1 = "hhihh";
	char *s2 = "hhhih";
	printf("return %d\n", strncmp(s1, s2, 4));
	printf("return %d\n", ft_strncmp(s1, s2, 4));
	return(0);
}
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 != '\0' && *s2 != '\0' && n > 0)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	if (n > 0)
	{
		return (*s1 - *s2);
	}
	return (0);
}
