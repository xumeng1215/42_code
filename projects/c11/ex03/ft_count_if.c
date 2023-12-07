/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:54:39 by mexu              #+#    #+#             */
/*   Updated: 2023/12/07 15:54:40 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
int	ft_test(char *c)
{
	return (strlen(c));
}
*/

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}

/*
int	main(void)
{
	char	*tab[] = {"", "", "", "123"};
	int	(*test_fuction)(char *) = ft_test;
	// test_fuction = ft_test;
	int	result = ft_count_if(tab, 4, test_fuction);

	printf("%d\n", result);
	return (1);
}
*/
