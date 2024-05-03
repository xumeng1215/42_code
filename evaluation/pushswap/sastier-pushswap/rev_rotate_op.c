/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_op.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sastier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:54:17 by sastier-          #+#    #+#             */
/*   Updated: 2024/04/20 12:54:18 by sastier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_node **a, int count)
{
	t_node	*temp;

	if (count == 1)
		ft_printf("rra\n");
	if (!(*a) || !((*a)->next))
		return ;
	temp = ft_find_last(*a);
	ft_find_second_last(*a)->next = NULL;
	temp->next = (*a);
	(*a) = temp;
}

void	rrb(t_node **b, int count)
{
	t_node	*temp;

	if (count == 1)
		ft_printf("rrb\n");
	if (!(*b) || !((*b)->next))
		return ;
	temp = ft_find_last(*b);
	ft_find_second_last(*b)->next = NULL;
	temp->next = (*b);
	(*b) = temp;
}

void	rrr(t_node **a, t_node **b, int count)
{
	t_node	*temp;

	if (count == 1)
		ft_printf("rrr\n");
	if (!(*a) || !((*a)->next))
		;
	else
	{
		temp = ft_find_last(*a);
		ft_find_second_last(*a)->next = NULL;
		temp->next = (*a);
		(*a) = temp;
	}
	if (!(*b) || !((*b)->next))
		;
	else
	{
		temp = ft_find_last(*b);
		ft_find_second_last(*b)->next = NULL;
		temp->next = (*b);
		(*b) = temp;
	}
}
