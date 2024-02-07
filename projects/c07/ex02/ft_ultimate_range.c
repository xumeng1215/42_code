/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 13:14:04 by mexu              #+#    #+#             */
/*   Updated: 2023/12/04 11:28:01 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size_of_range;
	int	*result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size_of_range = max - min;
	result = (int *)malloc(size_of_range * sizeof(int));
	if (!result)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	*range = result;
	while (i < size_of_range)
	{
		result[i] = min + i;
		i++;
	}
	return (size_of_range);
}


int	main(void)
{
	int	min = 4;
	int	max = 10;
	
	int *result; 

	int range = ft_ultimate_range(&result, min, max);

	printf("returned range is %d\n", range);
	
	int i = 0;
	while (i < range)
	{
		printf("%d\n", result[i]);
		i++;
	}
}

