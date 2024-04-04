/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lli2 <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 11:00:42 by lli2              #+#    #+#             */
/*   Updated: 2023/12/06 15:18:39 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc (sizeof(int) * size);
	if (*range == NULL)
	{
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (size);
}

 #include <stdio.h>
int main() {
    int *arr;
    int size = ft_ultimate_range(&arr, 5, 20);
    
	int	i=0;
	while (i < 70)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("size %d\n", size);
    return 0;
} 
