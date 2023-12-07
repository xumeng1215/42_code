/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:26:40 by mexu              #+#    #+#             */
/*   Updated: 2023/11/29 10:27:56 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

/*
int	main(void)
{
	int nb1 = 1;
	int nb2 = 2;
	
	int *i = &nb1;
	int *j = &nb2;

	printf("%d%d\n", nb1, nb2);
	ft_swap(i, j);
	printf("%d%d\n", nb1, nb2);
	return (0);
}
*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
