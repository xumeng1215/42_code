/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:33:07 by cadlard           #+#    #+#             */
/*   Updated: 2024/03/05 10:35:02 by cadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c);

int	ft_isspace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	num;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	num = 0;
	while (ft_isdigit(str[i]))
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	return ((int)(num * sign));
}

/*
// cc ft_isdigit.c ft_atoi.c -Wall -Werror -Wextra
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("str: %s\n", argv[1]);
		printf("int: %i\n", ft_atoi(argv[1]));
	}
	printf("min: %i\n", ft_atoi("2147483647"));
	printf("max: %i\n", ft_atoi("-2147483648"));
}
*/
