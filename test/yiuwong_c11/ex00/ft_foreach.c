/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiuwong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:56:27 by yiuwong           #+#    #+#             */
/*   Updated: 2023/12/08 23:23:26 by yiuwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		(*f)(tab[i++]);
}
/*
#include <stdio.h>
void ft_putnbr(int i)
{
	printf("%d\n", i);
}

int	main(void)
{
	int array[] = {1, 2, 3};
	ft_foreach(array, 3, &ft_putnbr);
}
*/
