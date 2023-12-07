/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 13:13:55 by mexu              #+#    #+#             */
/*   Updated: 2023/12/04 11:01:29 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*result;
	int	i;

	range = max - min;
	if (range <= 0)
		return (0);
	result = (int *)malloc(sizeof(int) * range);
	if (!result)
		return (0);
	i = 0;
	while (i < range)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}

/*
int	main(void)
{
	int *test;

	test = ft_range(30, 10);
	int i = 0;
	
	if (test == NULL)
		{
			printf ("haha");
		}
	while (i < 7)
	{
		printf("%d\n", test[i]);
		i++;
	}	
	return (0);
}
*/
