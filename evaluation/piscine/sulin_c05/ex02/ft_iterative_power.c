/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 18:36:42 by sulin             #+#    #+#             */
/*   Updated: 2023/12/05 15:52:34 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if ((power == 0 && nb == 0) || nb == 1)
		return (1);
	if (power < 0)
		return (0);
	else if (power > 0)
	{
		while (power > 0)
		{
			result = result * nb;
			power--;
		}
	}
	return (result);
}

int	main(void)
{
	int nb = -3;
	int power = -2;
	int a = ft_iterative_power(nb, power);
	printf("The power = %d\n", a);
}
