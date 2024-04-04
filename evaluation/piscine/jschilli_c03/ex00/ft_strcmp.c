/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschilli <jschilli@student.42.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:30:27 by jschilli          #+#    #+#             */
/*   Updated: 2023/12/04 17:15:05 by jschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
int	main()
{
	char	str[] = "azzaa";
	char	str2[] = "azaa";

	printf("string 1 = %s\n", str);
	printf("string 2 = %s\n", str2);
	printf("strcmp answer = %d\n", strcmp(str, str2));
	printf("answer = %d\n", ft_strcmp(str, str2));
	return (0);
}
*/
