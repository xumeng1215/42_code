/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:26:17 by mexu              #+#    #+#             */
/*   Updated: 2023/11/17 17:45:11 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnum_00(int i)
{
	char	c[2];

	if (i >= 0 && i <= 9)
	{
		c[0] = '0';
		c[1] = '0' + i;
		write(1, &c, 2);
	}
	else
	{
		c[0] = '0' + i / 10;
		c[1] = '0' + i % 10;
		write(1, &c, 2);
	}
}

void	ft_print(int i, int j)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	ft_putnum_00(i);
	write(1, &space, 1);
	ft_putnum_00(j);
	if (i != 98)
	{
		write (1, &comma, 1);
		write (1, &space, 1);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print(i, j);
			j++;
		}
		i++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
