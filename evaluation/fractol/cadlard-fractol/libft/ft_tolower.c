/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:23:59 by cadlard           #+#    #+#             */
/*   Updated: 2024/03/04 15:25:08 by cadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_tolower(int c)
{
	if (ft_isupper(c))
	{
		return (c + ' ');
	}
	return (c);
}

/*
#include <stdio.h>
int	main(void)
{
	char test[] = "126HsJsGqPpA99;;";
	printf("before: %s\n", test);

	for (size_t i = 0; test[i]; i++)
	{
		test[i] = ft_tolower(test[i]);
	}
	printf("after:  %s\n", test);
}
*/
