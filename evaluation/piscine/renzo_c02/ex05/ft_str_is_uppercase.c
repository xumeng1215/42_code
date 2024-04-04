/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaca-or <rbaca-or@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:58:35 by rbaca-or          #+#    #+#             */
/*   Updated: 2023/11/30 14:36:29 by rbaca-or         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("SLEEPDEPRIVED"));
	printf("%d\n", ft_str_is_uppercase("sleepdeprived"));
	printf("%d\n", ft_str_is_uppercase("SLeepdEPRived"));
	printf("%d", ft_str_is_uppercase("HAHAHAHA"));
}
