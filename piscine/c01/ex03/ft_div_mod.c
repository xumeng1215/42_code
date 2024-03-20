/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:29:20 by mexu              #+#    #+#             */
/*   Updated: 2023/11/29 10:30:08 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

/*
int	main(void)
{
	int i = 0;
	int j = 0;

	int *div = &i;
	int *mod = &j;

	ft_div_mod(23,2, div, mod);
	printf("%d %d %d %d\n", 23, 2, *div, *mod);
	return(0);
}
*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
