/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sastier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:19:25 by sastier-          #+#    #+#             */
/*   Updated: 2024/04/23 20:19:27 by sastier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_select_instruction(char *line, t_node **a, t_node **b)
{
	if (!ft_strncmp(line, "sa\n", 4))
		sa(a, 0);
	else if (!ft_strncmp(line, "sb\n", 4))
		sb(b, 0);
	else if (!ft_strncmp(line, "ss\n", 4))
		ss(a, b, 0);
	else if (!ft_strncmp(line, "rra\n", 5))
		rra(a, 0);
	else if (!ft_strncmp(line, "rrb\n", 5))
		rrb(b, 0);
	else if (!ft_strncmp(line, "rrr\n", 5))
		rrr(a, b, 0);
	else if (!ft_strncmp(line, "ra\n", 4))
		ra(a, 0);
	else if (!ft_strncmp(line, "rb\n", 4))
		rb(b, 0);
	else if (!ft_strncmp(line, "rr\n", 4))
		rr(a, b, 0);
	else if (!ft_strncmp(line, "pa\n", 4))
		pa(a, b, 0);
	else if (!ft_strncmp(line, "pb\n", 4))
		pb(a, b, 0);
	else
		return (0);
	return (1);
}
