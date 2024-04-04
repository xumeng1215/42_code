/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lli2 <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 10:12:38 by lli2              #+#    #+#             */
/*   Updated: 2023/12/06 10:12:40 by lli2             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	a = (int *)malloc (sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		a[i] = min;
		i++;
		min++;
	}
	return (a);
}
