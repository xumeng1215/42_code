/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebrunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 19:52:56 by jebrunet          #+#    #+#             */
/*   Updated: 2023/11/22 15:04:17 by jebrunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i != n)
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}
/*
int	main(void)
{
	printf("S1<S2:%d\n", strncmp("009", "010", 2));
	printf("S1>S2:%d\n", ft_strncmp("010", "009", 2));
	return (0);
}
*/
