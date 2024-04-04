/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:32:37 by xxie              #+#    #+#             */
/*   Updated: 2023/12/03 14:22:27 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*res;

	if (min >= max)
		return (0);
	range = max - min;
	res = malloc (range * 4);
	if (!res)
		return (0);
	i = 0;
	while (i < range)
	{
		res[i] = min + i;
		i++;
	}
	return (res);
}

int	main()
{
	int min = -1;
	int max = 3;
	int *res;
	int i = 0;
	int range = max - min;

	res = ft_range(min, max);
	while (i < range)
	{
		printf("%d, ",res[i]);
		i++;
	}
}

