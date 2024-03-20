/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiuwong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:07:05 by yiuwong           #+#    #+#             */
/*   Updated: 2023/12/09 23:17:52 by yiuwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort_asc(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort_desc(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	return (ft_is_sort_asc(tab, length, f) || ft_is_sort_desc(tab, length, f));
}
/*
#include <string.h>

int	ft_compare(int a, int b)
{
	return (a - b);
}

int	main(void)
{
//	int tab[] = {1, 134, 45, 7, 9, 0, -1, 24, 445};		// not sorted
//	int tab[] = {1, 4, 6, 67, 89, 100, 102, 130, 420};	// acsending
//	int tab[] = {420, 130, 102, 100, 89, 67, 6, 4, 1};	// descending
	printf("%d\n", ft_is_sort(tab, sizeof(tab) / sizeof(tab[0]), &ft_compare));
	return (0);
}
*/
