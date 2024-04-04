/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuyvo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:05:40 by thuyvo            #+#    #+#             */
/*   Updated: 2023/12/04 15:53:22 by thuyvo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*ptr;
	int	i;

	i = 0;
	size = max - min;
	if (size <= 0)
	{
		ptr = 0;
		return (ptr);
	}
	ptr = (int *)malloc(sizeof(int) * size);
	if (!ptr)
		return (0);
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
/*
int main(void)
{
	int i = 0;
	int *ptr = ft_range(5, 5);
	printf("%p\n", ptr);
	while (ft_range(5, 7)[i] != '\0')
	{
		printf("%d\n", ft_range(5, 7)[i]);
		i++;
	}
}*/
