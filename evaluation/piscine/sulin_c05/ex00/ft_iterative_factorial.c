/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:32:14 by sulin             #+#    #+#             */
/*   Updated: 2023/12/05 14:45:54 by sulin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (nb > 1)
	{
		a = a * nb;
		nb--;
	}
	return (a);
}
/*
#include <stdio.h>
int	main(void)
{
	int b = ft_iterative_factorial(0);
	printf("a=%d", b);
}*/
