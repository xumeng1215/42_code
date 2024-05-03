/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toupper.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:10:18 by cadlard           #+#    #+#             */
/*   Updated: 2024/03/04 15:22:23 by cadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_toupper(int c)
{
	if (ft_islower(c))
	{
		return (c - ' ');
	}
	return (c);
}

/*
#include <stdio.h>
int	main(void)
{
	char test[] = "126HsjsGqppa99;;";
	printf("before: %s\n", test);

	for (size_t i = 0; test[i]; i++)
	{
		test[i] = ft_toupper(test[i]);
	}
	printf("after:  %s\n", test);
}
*/
