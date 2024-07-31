/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:42:24 by mexu              #+#    #+#             */
/*   Updated: 2023/11/30 10:57:34 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);
/*
int main(void)
{
	char *s1 = "he";
	char *s2 = "ht";
	printf("return %d\n", strcmp(s1, s2));
	printf("return %d\n", ft_strcmp(s1, s2));
	return(0);
}
*/

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
