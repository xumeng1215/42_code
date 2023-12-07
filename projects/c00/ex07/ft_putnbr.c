/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:33:28 by mexu              #+#    #+#             */
/*   Updated: 2023/11/17 11:40:02 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	str[20];
	int		temp;
	int		length;

	temp = nb;
	length = 0;
	while (temp != 0)
	{
		temp /= 10;
		length++;
	}
	if (length == 0)
	{
		str[0] = '0';
		length = 1;
	}
	temp = length;
	while (temp > 0)
	{
		str[temp - 1] = '0' + nb % 10;
		nb /= 10;
		temp--;
	}
	str[length] = '\0';
	write(1, str, length);
}


int main(void)
{
	int i = -12020;

	ft_putnbr(i);
	return (0);
}
