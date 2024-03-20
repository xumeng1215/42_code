/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiuwong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:52:21 by yiuwong           #+#    #+#             */
/*   Updated: 2023/12/08 23:32:55 by yiuwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*p;
	int	i;

	p = malloc(sizeof(int *) * (length + 1));
	if (!p)
		return (0);
	i = 0;
	while (i < length)
	{
		p[i] = (*f)(tab[i]);
		i++;
	}
	p[i] = 0;
	return (p);
}
/*
#include <stdio.h>

int	to_negative(int i)
{
	return -i;
}

int	main(void)
{
	int	tab[] = {1, 2, 3};
	int	*array;

	array = ft_map(tab, 3, &to_negative);
	while (*array)
	{
		printf("%d\n", *array);
		array++;
	}
	return (0);
}
*/
