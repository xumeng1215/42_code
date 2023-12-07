/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:25:58 by mexu              #+#    #+#             */
/*   Updated: 2023/12/07 14:41:06 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
void	ft_test(int a)
{
	printf("%d\n", a);
}
*/
void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
int	main(void)
{
	int	tab[5] = {1,2,3,4,5};
	void	(*test_fuction)(int) = ft_test;
	// test_fuction = ft_test;
	ft_foreach(tab, 5, test_fuction);
	return (1);
}
*/
