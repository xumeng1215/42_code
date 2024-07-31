/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:46:55 by mexu              #+#    #+#             */
/*   Updated: 2023/12/02 13:56:57 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	long	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i * i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	printf("%d is prime? %d\n", 20, ft_is_prime(20));
	printf("%d is prime? %d\n", 0, ft_is_prime(0));
	printf("%d is prime? %d\n", 1, ft_is_prime(1));
	printf("%d is prime? %d\n", 6673, ft_is_prime(6673));
	return (0);
}
*/
