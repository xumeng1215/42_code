/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:02:10 by mexu              #+#    #+#             */
/*   Updated: 2023/12/07 16:02:13 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
int	ft_test(int a, int b)
{
	if (a < b)
		return (-1);
	else if (a == b)
		return (0);
	else
		return (1);
}
*/

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	tag;

	if (length <= 2)
		return (1);
	tag = f(tab[0], tab[1]);
	i = 0;
	while (i < (length - 1))
	{
		if (f(tab[i], tab[i + 1]) != tag)
			return (0);
		i++;
	}
	return (1);
}

/*
int	main(void)
{
	int	tab[7] = {1, 2, 3, 4, 5, 6, 1};
	int	(*test_fuction)(int, int) = ft_test;
	// test_fuction = ft_test;
	int	result = ft_is_sort(tab, 4, test_fuction);

	printf("%d\n", result);
	return (1);
}
*/
