/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 09:52:55 by sulin             #+#    #+#             */
/*   Updated: 2023/12/05 15:55:36 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if ((nb == 0 && power == 0) || nb == 1)
		return (1);
	if (power < 0)
		return (0);
	else if (power > 0)
	{
		power--;
		result = nb * ft_recursive_power(nb, power);
		//power--;
	}
	return (result);
}

int	main(void)
{
	int nb =  5;
	int power = 2;

	int a = ft_recursive_power(nb, power);
	printf("a=%d", a);
}
