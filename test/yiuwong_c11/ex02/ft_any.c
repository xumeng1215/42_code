/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiuwong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:59:58 by yiuwong           #+#    #+#             */
/*   Updated: 2023/12/08 23:44:56 by yiuwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	if (!tab)
		return (0);
	while (*tab)
	{
		if ((*f)(*tab) != 0)
			return (1);
		tab++;
	}
	return (0);
}
/*
#include <stdio.h>

int	func(char *str)
{
	if (str[0] == 'A')
		return (1);
	return (0);
}

int	main(void)
{
	char *tab[] = {"A", "BCD"};
	printf("%d\n", ft_any(tab, &func));
	return (0);
}
*/
