/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:38:07 by mexu              #+#    #+#             */
/*   Updated: 2023/12/07 16:38:09 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_atoi(char *str)
{
	int	neg_count;
	int	result;

	result = 0;
	neg_count = 0;
	while (*str < '0' || *str > '9')
	{
		if (*str == '-')
			neg_count++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	while (neg_count > 0)
	{
		neg_count--;
		result = -1 * result;
	}
	return (result);
}

void	ft_putnbr(int i)
{
	printf("%d\n", i);
}

