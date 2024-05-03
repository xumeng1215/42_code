/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sastier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:13:57 by sastier-          #+#    #+#             */
/*   Updated: 2024/04/18 14:13:58 by sastier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize_node(t_node *lst)
{
	int	count;

	count = 0;
	if (!lst)
		return (count);
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

void	ft_lstprint(t_node *lst)
{
	if (!lst)
		return ;
	while (lst)
	{
		ft_printf("Data %d : %d, value : %d\n", lst->pos, \
			lst->data, lst->value);
		lst = lst->next;
	}
}

t_node	*ft_find_last(t_node *a)
{
	if (!a)
		return (NULL);
	while (a->next)
		a = a->next;
	return (a);
}

t_node	*ft_find_second_last(t_node *a)
{
	if (!a || !a->next)
		return (NULL);
	while (a->next->next)
		a = a->next;
	return (a);
}

int	ft_stack_sorted(t_node *a)
{
	t_node	*temp;

	temp = a;
	if (!a)
		return (0);
	while (temp->next)
	{
		if (temp->data > temp->next->data)
			return (0);
		temp = temp->next;
	}
	return (1);
}
