/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaca-or <rbaca-or@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:57:57 by rbaca-or          #+#    #+#             */
/*   Updated: 2023/11/30 14:31:18 by rbaca-or         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("sleepdeprived"));
	printf("%d\n", ft_str_is_lowercase("SLEEPDEPRIVED"));
	printf("%d\n", ft_str_is_lowercase("sleEPdepriVED"));
	printf("%d", ft_str_is_lowercase("hehehehe"));
}
*/
