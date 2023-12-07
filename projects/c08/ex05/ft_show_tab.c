/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:13:25 by mexu              #+#    #+#             */
/*   Updated: 2023/12/05 15:05:11 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
	return ;
}

void	ft_putnbr(int nb)
{
	long	i;
	char	c;

	i = nb;
	if (i < 0)
	{
		write(1, "-", 1);
		i = -1 * i;
	}
	if (i < 9)
	{
		c = '0' + i;
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	return ;
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write (1, "\n", 1);
		ft_putnbr(par[i].size);
		write (1, "\n", 1);
		ft_putstr(par[i].copy);
		write (1, "\n", 1);
		i++;
	}
	return ;
}

/*
int	main(int argc, char *args[])
{
	ft_show_tab(ft_strs_to_tab(argc, args));
	return (0);	
}
*/
