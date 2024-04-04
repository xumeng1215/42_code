/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuyvo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:24:34 by thuyvo            #+#    #+#             */
/*   Updated: 2023/12/04 15:53:34 by thuyvo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*buffer;

	i = 0;
	size = max - min;
	if (size <= 0)
	{
		*range = 0;
		return (0);
	}
	buffer = (int *)malloc(size * sizeof(int));
	if (!buffer)
		return (-1);
	while (i < size)
	{
		buffer[i] = min;
		i++;
		min++;
	}
	*range = buffer;
	return (size);
}
/*
int main(void)
{
	int *range;
	range = malloc(4);
	range[0] = 2;
	printf("%d\n", ft_ultimate_range(&range, 5, 4));
	printf("%p\n", range);
	int i = 0;
	while (range[i] != '\0')
	{
		printf("%d", range[i]);
		i++;
	}
}*/
