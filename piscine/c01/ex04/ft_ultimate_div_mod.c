/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:31:04 by mexu              #+#    #+#             */
/*   Updated: 2023/11/29 10:34:15 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

/*
int 	main(void)
{
	int i = 23;
	int j = 4;

	int *a = &i;
	int *b = &j;
	
	printf("%d\t%d\n", *a, *b);
	ft_ultimate_div_mod(a, b);
	printf("%d\t%d\n", *a, *b);
	return (0);
}
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a) / (*b);
	mod = (*a) % (*b);
	*a = div;
	*b = mod;
}
