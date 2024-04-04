/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abudgen <abudgen@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:51:04 by abudgen           #+#    #+#             */
/*   Updated: 2023/12/07 11:52:15 by abudgen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		while (s1[i] == s2[i] && i <= n && s1[i] && s2[i] != '\0')
		{
			i++;
		}
		return (s1[i] - s2[i]);
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "water";
	char	str2[] = "fire";
	char	str3[] = "watez";

	printf("Mine:%d\n", ft_strncmp(str, str, 3));
	printf("Func:%d\n", strncmp(str, str, 3));
	printf("Mine:%d\n", ft_strncmp(str, str3, 5));
	printf("Func:%d\n", strncmp("water", "waTer", 5));
	printf("Mine:%d\n", ft_strncmp("snow", "water", 5));
	printf("Func:%d\n", strncmp("snow", "water", 5));
	printf("Mine:%d\n", ft_strncmp("water", "watEr", 2));
	printf("Func:%d\n", strncmp("water", "watEr", 2));
	printf("Mine:%d\n", strncmp(str3, str2, 4));
	printf("Func:%d\n", strncmp(str3, str2, 4));
}*/
