/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_op.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sastier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:33:27 by sastier-          #+#    #+#             */
/*   Updated: 2024/04/20 12:33:29 by sastier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **a, int count)
{
	t_node	*temp;

	if (count == 1)
		ft_printf("ra\n");
	if (!(*a) || !((*a)->next))
		return ;
	temp = (*a);
	(*a) = (*a)->next;
	temp->next = NULL;
	ft_find_last(*a)->next = temp;
}

void	rb(t_node **b, int count)
{
	t_node	*temp;

	if (count == 1)
		ft_printf("rb\n");
	if (!(*b) || !((*b)->next))
		return ;
	temp = (*b);
	(*b) = (*b)->next;
	temp->next = NULL;
	ft_find_last(*b)->next = temp;
}

void	rr(t_node **a, t_node **b, int count)
{
	t_node	*temp;

	if (count == 1)
		ft_printf("rr\n");
	if (!(*a) || !((*a)->next))
		;
	else
	{
		temp = (*a);
		(*a) = (*a)->next;
		temp->next = NULL;
		ft_find_last(*a)->next = temp;
	}
	if (!(*b) || !((*b)->next))
		;
	else
	{
		temp = (*b);
		(*b) = (*b)->next;
		temp->next = NULL;
		ft_find_last(*b)->next = temp;
	}
}
