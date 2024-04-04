/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:31:14 by sulin             #+#    #+#             */
/*   Updated: 2023/12/05 14:54:21 by sulin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	else if (nb > 1)
	{
		a = nb * ft_recursive_factorial(nb -1);
		nb--;
	}
	return (a);
}
/*
#include <stdio.h>
int main(void)
{
	int b = ft_recursive_factorial(5);
	printf("b=%d", b);
}*/
