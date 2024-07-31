/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:37:28 by mexu              #+#    #+#             */
/*   Updated: 2023/12/02 11:45:19 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (power > 0)
		{
			result = nb * result;
			power--;
		}
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d power %d is %d\n", 2, 2, ft_iterative_power(2, 10));
	printf("%d power %d is %d\n", 2, -2, ft_iterative_power(2, -2));
	printf("%d power %d is %d\n", 0, 0, ft_iterative_power(0, 0));
}
*/
