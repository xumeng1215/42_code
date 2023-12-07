/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:55:38 by mexu              #+#    #+#             */
/*   Updated: 2023/12/07 14:55:42 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*
int	ft_test(int a)
{
	return (a + 1);
}
*/

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*result;

	result = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}

/*
int	main(void)
{
	int	tab[5] = {1,2,3,4,5};
	int	(*test_fuction)(int) = ft_test;
	// test_fuction = ft_test;
	int	*result = ft_map(tab, 5, test_fuction);

	for (int i = 0; i < 5; i++)
		printf("%d\n", result[i]);
	return (1);
}
*/
