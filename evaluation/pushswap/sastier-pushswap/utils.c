/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sastier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:55:04 by sastier-          #+#    #+#             */
/*   Updated: 2024/04/17 13:55:06 by sastier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long	ft_atol(const char *str)
{
	int			count;
	long long	res;
	int			neg;

	count = 0;
	res = 0;
	neg = 1;
	while ((str[count] >= 9 && str[count] <= 13) || str[count] == ' ')
	{
		count++;
	}
	if (str[count] == '-' || str[count] == '+')
	{
		if (str[count] == '-')
			neg *= -1;
		count++;
	}
	if (!(str[count] >= '0' && str[count] <= '9'))
		return (LONG_MAX);
	while (str[count] >= '0' && str[count] <= '9')
		res = res * 10 + (str[count++] - 48);
	if (str[count])
		return (LONG_MAX);
	return (res * neg);
}

int	basic_verif(t_node *a, long long value, int pos)
{
	t_node	*temp;
	int		i;
	int		size;

	i = 0;
	temp = a;
	size = ft_lstsize_node(a);
	if (value > INT_MAX || value < INT_MIN)
		return (0);
	if (pos == 0)
		return (1);
	while (i < size)
	{
		if (temp->data == value)
			return (0);
		temp = temp->next;
		i++;
	}
	return (1);
}

int	av_empty(char **av)
{
	int	i;
	int	y;

	i = 0;
	while (av[i])
	{
		y = 0;
		while (av[i][y])
		{
			if (av[i][y] > 32)
				return (0);
			y++;
		}
		i++;
	}
	return (1);
}
