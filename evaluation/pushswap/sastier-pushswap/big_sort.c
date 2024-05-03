/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sastier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 17:54:35 by sastier-          #+#    #+#             */
/*   Updated: 2024/04/21 17:54:37 by sastier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	assign_value_bis(t_node **st_a, t_node *a, t_node *b)
{
	if (a->data > b->data && ft_find_last(a)->data < b->data)
	{
		b->value = find_best_value(st_a, a, b);
		b->ref_in_a = a->data;
		return ;
	}
	while (a->next)
	{
		if (a->data < b->data && a->next->data > b->data)
		{
			b->value = find_best_value(st_a, a, b);
			b->ref_in_a = a->next->data;
			return ;
		}
		a = a->next;
	}
}

void	assign_value(t_node **st_a, t_node *a, t_node *b)
{
	while (b)
	{
		if (b->data < ft_find_smallest(a)->data)
		{
			b->value = find_best_value(st_a, a, b);
			b->ref_in_a = ft_find_smallest(a)->data;
		}
		else if (b->data > ft_find_biggest(a)->data)
		{
			b->value = find_best_value(st_a, a, b);
			b->ref_in_a = ft_find_smallest(a)->data;
		}
		else
			assign_value_bis(st_a, a, b);
		b = b->next;
	}
}

void	finish_job(t_node **a, t_node *temp_a, t_node **b, t_node *temp_b)
{
	if (*a != temp_a)
	{
		if (temp_a->above_median == 0)
			while (*a != temp_a)
				ra(a, 1);
		else
			while (*a != temp_a)
				rra(a, 1);
	}
	if (*b != temp_b)
	{
		if (temp_b->above_median == 0)
			while (*b != temp_b)
				rb(b, 1);
		else
			while (*b != temp_b)
				rrb(b, 1);
	}
}

void	put_in_a(t_node **a, t_node **b)
{
	t_node	*tb;
	t_node	*ta;

	tb = ft_find_smallest_value(*b);
	ta = ft_find_corr(*a, tb->ref_in_a);
	if (*a != ta && *b != tb && ((tb->above_median == 0 && \
		ta->above_median == 0)))
	{
		while (*a != ta && *b != tb)
			rr(a, b, 1);
		finish_job(a, ta, b, tb);
	}
	else if (*a != ta && *b != tb && (tb->above_median == 1 && \
		ta->above_median == 1))
	{
		while (*a != ta && *b != tb)
			rrr(a, b, 1);
		finish_job(a, ta, b, tb);
	}
	else
		finish_job(a, ta, b, tb);
}

void	big_sort(t_node **a, t_node **b)
{
	t_node	*temp;

	if (ft_lstsize_node(*a) > 7)
		first_step(a, b);
	else
		first_step_bis(a, b);
	while (*b)
	{
		assign_pos(*a, *b);
		assign_value(a, *a, *b);
		put_in_a(a, b);
		pa(a, b, 1);
	}
	assign_pos(*a, *b);
	temp = ft_find_smallest(*a);
	ft_find_corr(*a, temp->data);
	if (temp->pos == temp->pos_temp)
		while (*a != temp)
			ra(a, 1);
	else
		while (*a != temp)
			rra(a, 1);
}
