/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:10:42 by mexu              #+#    #+#             */
/*   Updated: 2023/12/03 12:17:57 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 0)
	{
		result = nb * result;
		nb--;
	}
	return (result);
}

/*
int	main(void)
{
	int	i = 0;
	
	printf("i =  %d\n", i);
	printf("factorial %d\n", ft_iterative_factorial(i));

	return (0);
}
*/
