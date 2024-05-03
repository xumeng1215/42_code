/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_op.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sastier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:47:17 by sastier-          #+#    #+#             */
/*   Updated: 2024/04/17 12:47:25 by sastier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_node(int num, t_node *a, char **av, int ac)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
	{
		ft_clear_all(&a, NULL, av, ac);
		return (NULL);
	}
	new->data = num;
	new->pos = 0;
	new->value = 0;
	new->ref_in_a = 0;
	new->pos_temp = 0;
	new->above_median = 0;
	new->change = 0;
	new->next = NULL;
	return (new);
}

t_node	*create_stack(char **av, int ac)
{
	t_node	*a;
	int		pos;
	t_node	*temp;

	pos = 0;
	a = NULL;
	while (av[pos] && ((a && pos > 0) || (!a && pos == 0)))
	{
		if (basic_verif(a, ft_atol(av[pos]), pos) == 0)
		{
			ft_clear_all(&a, NULL, av, ac);
			return (0);
		}
		if (pos == 0)
		{
			a = create_node(ft_atol(av[pos++]), a, av, ac);
			temp = a;
		}
		else
		{
			temp->next = create_node(ft_atol(av[pos++]), a, av, ac);
			temp = temp->next;
		}
	}
	return (a);
}
