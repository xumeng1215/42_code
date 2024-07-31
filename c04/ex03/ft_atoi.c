/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:15:29 by mexu              #+#    #+#             */
/*   Updated: 2023/12/02 13:12:01 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

/*
int main(void)
{
    char    *str = "   -- -_122+--1234dd1234";
    printf("%d\n", ft_atoi(str));
    return (0);
}
*/
