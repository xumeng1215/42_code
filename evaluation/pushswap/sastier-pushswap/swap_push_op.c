/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push_op.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sastier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:31:19 by sastier-          #+#    #+#             */
/*   Updated: 2024/04/19 17:31:20 by sastier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node **a, int count)
{
	int	temp;

	if (count == 1)
		ft_printf("sa\n");
	if (!(*a) || !((*a)->next))
		return ;
	temp = (*a)->data;
	(*a)->data = (*a)->next->data;
	(*a)->next->data = temp;
}

void	sb(t_node **b, int count)
{
	int	temp;

	if (count == 1)
		ft_printf("sb\n");
	if (!(*b) || !((*b)->next))
		return ;
	temp = (*b)->data;
	(*b)->data = (*b)->next->data;
	(*b)->next->data = temp;
}

void	ss(t_node **a, t_node **b, int count)
{
	int	temp;

	if (count == 1)
		ft_printf("ss\n");
	if (!(*a) || !((*a)->next))
		;
	else
	{
		temp = (*a)->data;
		(*a)->data = (*a)->next->data;
		(*a)->next->data = temp;
	}
	if (!(*b) || !((*b)->next))
		;
	else
	{
		temp = (*b)->data;
		(*b)->data = (*b)->next->data;
		(*b)->next->data = temp;
	}
}

void	pa(t_node **a, t_node **b, int count)
{
	t_node	*temp;

	if (count == 1)
		ft_printf("pa\n");
	if (!(*b))
		return ;
	temp = *b;
	(*b) = (*b)->next;
	temp->next = (*a);
	(*a) = temp;
}

void	pb(t_node **a, t_node **b, int count)
{
	t_node	*temp;

	if (count == 1)
		ft_printf("pb\n");
	if (!(*a))
		return ;
	temp = *a;
	(*a) = (*a)->next;
	temp->next = (*b);
	(*b) = temp;
}
