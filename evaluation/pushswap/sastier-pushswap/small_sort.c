/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sastier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 19:45:29 by sastier-          #+#    #+#             */
/*   Updated: 2024/04/20 19:45:31 by sastier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_sort(t_node **a)
{
	if (ft_stack_sorted(*a) == 1)
		return ;
	if (ft_lstsize_node(*a) == 2)
	{
		if ((*a)->data > (*a)->next->data)
			sa(a, 1);
		return ;
	}
	if (ft_find_smallest(*a) == (*a) && ft_find_2nd_smallest(*a) != (*a)->next)
	{
		sa(a, 1);
		ra(a, 1);
	}
	else if (ft_find_smallest(*a) == (*a)->next
		&& ft_find_2nd_smallest(*a) == (*a))
		sa(a, 1);
	else if (ft_find_smallest(*a) == (*a)->next)
		ra(a, 1);
	else if (ft_find_2nd_smallest(*a) == (*a))
		rra(a, 1);
	else
	{
		sa(a, 1);
		rra(a, 1);
	}
}

void	first_step_bis(t_node **a, t_node **b)
{
	while (ft_lstsize_node(*a) > 3)
		pb(a, b, 1);
	small_sort(a);
}

static void	sub_function_bis(t_node **a, int *new)
{
	ra(a, 1);
	(*new) = 1;
}

void	first_step(t_node **a, t_node **b)
{
	t_array	*ref;
	int		size;
	int		new;

	new = 0;
	change_data(a);
	size = ft_lstsize_node(*a);
	ref = find_best_array(*a, size);
	while ((*a) && (*a) != ref->ref1)
		pb(a, b, 1);
	ra(a, 1);
	while ((*a) != ref->ref1)
	{
		if ((*a)->data > ft_find_last(*a)->data && (new == 0 || (*a)->data < \
			ref->ref1->data) && (*a)->data < ft_find_last(*a)->data + size / 10)
			ra(a, 1);
		else if ((*a)->data < ref->ref1->data && new == 0
			&& preview(ref->ref1->data, *a, size) > 10 && new == 0)
			sub_function_bis(a, &new);
		else
			pb(a, b, 1);
	}
	free(ref);
}
