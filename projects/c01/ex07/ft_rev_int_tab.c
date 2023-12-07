/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:42:13 by mexu              #+#    #+#             */
/*   Updated: 2023/11/29 10:46:43 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

/*
int	main(void)
{
	int array[] = {1, 2, 3, 4, 5, 9};
	int length = 6;
	int i = 0;
	
	ft_rev_int_tab(array, length);

	while(i<length)
	{
		printf("second %d\n", array[i]);
		i++;
	}

	return(0);
}
*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
