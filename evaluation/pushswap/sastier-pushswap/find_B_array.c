/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_B_array.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sastier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:30:58 by sastier-          #+#    #+#             */
/*   Updated: 2024/04/25 15:31:00 by sastier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_array	*create_array(void)
{
	t_array	*ref;

	ref = malloc(sizeof(t_array));
	if (!ref)
		return (NULL);
	ref->ref1 = NULL;
	ref->ref2 = NULL;
	ref->total = 0;
	return (ref);
}

static void	sub_function(t_node *a, t_node **last, int *total, int *new)
{
	if (new)
		(*new)++;
	(*total)++;
	(*last) = a;
}

int	preview(int first, t_node *a, int size)
{
	int	total;
	int	last;

	last = a->data;
	total = 0;
	a = a->next;
	while (a)
	{
		if (a->data > last && a->data < first && a->data < last + size * 0.1)
		{
			total++;
			last = a->data;
		}
		a = a->next;
	}
	return (total);
}

void	is_best(t_node *a, t_array *ref, int size)
{
	t_node	*first;
	t_node	*last;
	int		total;
	int		new;

	first = a;
	last = a;
	total = 0;
	new = 0;
	size++;
	while (a)
	{
		if (a->data > last->data && (new == 0 || a->data < first->data)
			&& a->data < last->data + size * 0.1)
			sub_function(a, &last, &total, NULL);
		else if (a->data < first->data && new == 0
			&& preview(first->data, a, size) > 10)
			sub_function(a, &last, &total, &new);
		a = a->next;
	}
	if (total > ref->total)
	{
		ref->total = total;
		ref->ref1 = first;
	}
}

t_array	*find_best_array(t_node *a, int size)
{
	t_array	*ref;

	ref = create_array();
	while (ft_lstsize_node(a) > ref->total)
	{
		is_best(a, ref, size);
		a = a->next;
	}
	return (ref);
}
