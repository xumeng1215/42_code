/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 14:56:29 by mexu              #+#    #+#             */
/*   Updated: 2023/12/07 14:56:32 by mexu             ###   ########.fr       */
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

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

/*
int	main(void)
{
	char	*tab[] = {"1", "", "", 0};
	int	(*test_fuction)(char *) = ft_test;
	// test_fuction = ft_test;
	int	result = ft_any(tab, test_fuction);

	printf("%d\n", result);
	return (1);
}
*/
