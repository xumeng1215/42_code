/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_redo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuyvo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 09:40:45 by thuyvo            #+#    #+#             */
/*   Updated: 2023/11/19 13:25:11 by thuyvo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	error_check(int x, int y)
{
	int	flag;

	flag = 1;
	if (x < 0 || y < 0 || (x == 0 && y != 0) || (x != 0 && y == 0))
	{
		write (1, "Invalid number\n", 15);
		flag = 0;
	}
	if (x == 0 && y == 0)
		flag = 0;
	return (flag);
}

void	rush(int x, int y)
{
	int	row_i;
	int	col_i;

	row_i = 1;
	if (error_check(x, y) == 0)
		return ;
	while (row_i <= y)
	{
		col_i = 1;
		while (col_i <= x)
		{
			if (col_i == 1 && (row_i == 1 || row_i == y))
				ft_putchar('A');
			else if (col_i == x && (row_i == 1 || row_i == y))
				ft_putchar('C');
			else if ((col_i > 1 && col_i < x) && (row_i > 1 && row_i < y))
				ft_putchar(' ');
			else
				ft_putchar('B');
			col_i++;
		}
		ft_putchar('\n');
		row_i++;
	}
}
