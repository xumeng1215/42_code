/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 11:22:45 by mexu              #+#    #+#             */
/*   Updated: 2023/12/03 14:16:16 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * (ft_recursive_factorial(nb - 1)));
}

/*
int	main(void)
{
	
	printf("factorial %d is %d\n", 0, ft_recursive_factorial(0));
	printf("factorial %d is %d\n", -1, ft_recursive_factorial(-1));
	printf("factorial %d is %d\n", 5, ft_recursive_factorial(5));

	return (0);
}
*/
