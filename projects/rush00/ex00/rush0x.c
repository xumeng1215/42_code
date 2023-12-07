/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 14:59:23 by mexu              #+#    #+#             */
/*   Updated: 2023/11/19 11:51:33 by thuyvo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int len, char start, char middle, char end)
{
	int	letter_counter;

	letter_counter = 1;
	while (letter_counter <= len)
	{
		if (letter_counter == 1)
			ft_putchar(start);
		else if (letter_counter == len)
			ft_putchar(end);
		else
			ft_putchar(middle);
		letter_counter++;
	}
	ft_putchar('\n');
}

	/*
	top_left_corner = set[0];
	top_right_corner = set[1];
	bottom_left_corner = set[2];
	bottom_right_corner = set[3];
	left_right_edge = set[4];
	top_bottom_edge = set[5];
	*/
void	rushx(int x, int y, char set[])
{
	int		line_counter;

	line_counter = 1;
	if (x >= 1 && y >= 1)
	{
		while (line_counter <= y)
		{
			if (line_counter == 1)
				ft_print(x, set[0], set[5], set[1]);
			else if (line_counter == y)
				ft_print(x, set[2], set[5], set[3]);
			else
				ft_print(x, set[4], ' ', set[4]);
			line_counter++;
		}
	}
}

int	main(void)
{
	char	set[6];

	set[0] = '/';
	set[1] = '\\';
	set[2] = '\\';
	set[3] = '/';
	set[4] = '*';
	set[5] = '*';
	rushx(5, 3, set);
	return (0);
}
