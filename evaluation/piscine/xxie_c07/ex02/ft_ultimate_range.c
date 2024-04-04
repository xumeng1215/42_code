/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxie <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:02:20 by xxie              #+#    #+#             */
/*   Updated: 2023/12/03 14:24:16 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*res;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	res = malloc (size * 4);
	if (!res)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	*range = res;
	while (i < size)
	{
		res[i] = min + i;
		i++;
	}
	return (size);
}

int main()
{
	int min = -2;
	int max = 4;
	int *res;
	int size;
	int i = 0;

    size = ft_ultimate_range(&res, min, max);
    while (i < size)
    {
        printf("%d, ", res[i]);
        i++;
    }
    printf("\n");
	printf("size:%d\n",size);
}

