/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:01:12 by mexu              #+#    #+#             */
/*   Updated: 2023/12/02 13:04:11 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_put_positive(int nb)
{
	int		i;
	int		len;
	char	str[20];

	i = nb;
	len = 0;
	while (i != 0)
	{
		i = i / 10;
		len++;
	}
	i = len;
	while (i > 0)
	{
		str[i -1] = '0' + nb % 10;
		nb = nb / 10;
		i--;
	}
	str[len] = '\0';
	write (1, str, len);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb == 0)
		write(1, "0", 1);
	else
	{
		if (nb < 0)
		{
			write (1, "-", 1);
			nb = -1 * nb;
		}
		ft_put_positive(nb);
	}
}
/*
int	main(void)
{
	ft_putnbr(14748364);
	return (0);
}
*/
