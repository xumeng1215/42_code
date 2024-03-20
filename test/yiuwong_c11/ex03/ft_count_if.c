/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiuwong <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:02:37 by yiuwong           #+#    #+#             */
/*   Updated: 2023/12/08 23:54:38 by yiuwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	if (!tab)
		return (0);
	i = 0;
	count = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}
/*
#include <stdio.h>

int	func(char *str)
{
	return (str[0] >= 'A' && str[0] <= 'Z');
}

int	main(void)
{
	char *tab[] = {"A", "BCD", "aaa"};
	printf("%d\n", ft_count_if(tab, 3, &func));
	return (0);
}
*/
