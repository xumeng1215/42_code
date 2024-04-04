/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sulin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 10:29:56 by sulin             #+#    #+#             */
/*   Updated: 2023/12/05 15:55:56 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	n;

	n = 1;
	if (index == 0)
		n = 0;
	if (index == 1)
		n = 1;
	if (index >= 2)
		n = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (n);
}
/*
int	main(void)
{
	int	a = ft_fibonacci(10);
	printf("a = %d", a);
}*/
