/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_op_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sastier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:42:10 by sastier-          #+#    #+#             */
/*   Updated: 2024/04/20 19:42:14 by sastier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_pos_bis(t_node *b);

t_node	*ft_find_smallest(t_node *a)
{
	t_node	*temp;

	temp = a;
	if (!a)
		return (NULL);
	while (a->next)
	{
		a = a->next;
		if (a->data < temp->data)
			temp = a;
	}
	return (temp);
}

t_node	*ft_find_2nd_smallest(t_node *a)
{
	t_node	*temp;
	int		smallest;

	temp = a;
	if (!a)
		return (NULL);
	if (!a->next)
		return (a);
	smallest = ft_find_smallest(a)->data;
	while (a->next)
	{
		a = a->next;
		if (a->data < temp->data && a->data != smallest)
			temp = a;
	}
	return (temp);
}

t_node	*ft_find_biggest(t_node *a)
{
	t_node	*temp;

	if (!a)
		return (NULL);
	temp = a;
	while (a->next)
	{
		a = a->next;
		if (a->data > temp->data)
			temp = a;
	}
	return (temp);
}

void	assign_pos(t_node *a, t_node *b)
{
	int	pos;
	int	size;

	size = ft_lstsize_node(a);
	pos = 0;
	while (a)
	{
		if (pos <= size / 2)
		{
			a->above_median = 0;
			a->pos = pos;
		}
		else
		{
			a->above_median = 1;
			a->pos = size - pos;
		}
		a->pos_temp = pos++;
		a = a->next;
	}
	assign_pos_bis(b);
}

void	assign_pos_bis(t_node *b)
{
	int	pos;
	int	size;

	pos = 0;
	size = ft_lstsize_node(b);
	while (b)
	{
		if (pos <= size / 2)
		{
			b->above_median = 0;
			b->pos = pos;
		}
		else
		{
			b->above_median = 1;
			b->pos = size - pos;
		}
		b->pos_temp = pos++;
		b = b->next;
	}
}
