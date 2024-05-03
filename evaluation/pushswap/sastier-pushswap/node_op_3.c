/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_op_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sastier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 19:10:01 by sastier-          #+#    #+#             */
/*   Updated: 2024/04/21 19:10:02 by sastier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*ft_find_smallest_value(t_node *a)
{
	t_node	*temp;
	int		pos;

	pos = 0;
	temp = a;
	if (!a)
		return (NULL);
	while (a->next)
	{
		a = a->next;
		if (a->value < temp->value)
		{
			temp = a;
			temp->pos_temp = pos;
		}
		pos++;
	}
	return (temp);
}

t_node	*ft_find_corr(t_node *a, int data)
{
	int	pos;
	int	size;

	size = ft_lstsize_node(a);
	pos = 0;
	if (!a)
		return (NULL);
	while (a)
	{
		if (a->data == data)
		{
			if (pos <= size / 2)
				a->pos = pos;
			else
				a->pos = size - pos;
			a->pos_temp = pos;
			return (a);
		}
		pos++;
		a = a->next;
	}
	return (a);
}

int	find_best_value(t_node **st_a, t_node *a, t_node *b)
{
	int	useless;

	useless = (*st_a)->pos;
	if (a->above_median == b->above_median)
	{
		if (a->pos > b->pos)
			return (a->pos);
		else
			return (b->pos);
	}
	return (a->pos + b->pos);
}

static t_node	*ft_find_smallest_bis(t_node *a)
{
	t_node	*temp;

	if (!a)
		return (NULL);
	while (a->change == 1)
		a = a->next;
	temp = a;
	while (a->next)
	{
		a = a->next;
		if (a->data < temp->data && a->change == 0)
			temp = a;
	}
	return (temp);
}

void	change_data(t_node **a)
{
	int		size;
	int		i;
	t_node	*temp;

	size = ft_lstsize_node(*a);
	i = 0;
	while (i < size)
	{
		temp = ft_find_smallest_bis(*a);
		temp->data = i;
		temp->change = 1;
		i++;
	}
}
