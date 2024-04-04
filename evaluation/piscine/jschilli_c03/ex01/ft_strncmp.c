/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschilli <jschilli@student.42.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:30:27 by jschilli          #+#    #+#             */
/*   Updated: 2023/12/04 17:15:23 by jschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
int	main()
{
	char	str[] = "azaaa";
	char	str2[] = "azza";

	printf("string 1 = %s\n", str);
	printf("string 2 = %s\n", str2);
	printf("strncmp answer = %d\n", strncmp(str, str2, 6));
	printf("answer = %d\n", ft_strncmp(str, str2, 6));
	return (0);
}*/
