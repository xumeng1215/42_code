/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abudgen <abudgen@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:13:53 by abudgen           #+#    #+#             */
/*   Updated: 2023/12/06 16:24:09 by abudgen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[] = "water";
	char	str2[] = "watez";

	printf("Mine:%d\n", ft_strcmp(str, str2));
	printf("Func:%d\n", strcmp(str, str2));
	printf("Mine:%d\n", ft_strcmp("water", "watEr"));
	printf("Func:%d\n", strcmp("water", "watEr"));
	printf("Mine:%d\n", ft_strcmp("water", "snow"));
	printf("Func:%d\n", strcmp("water", "snow"));
	printf("Mine:%d\n", ft_strcmp("fire", "water"));
	printf("Func:%d\n", strcmp("fire", "water"));
}*/
