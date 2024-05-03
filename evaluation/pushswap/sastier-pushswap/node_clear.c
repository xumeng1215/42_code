/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_clear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sastier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:12:50 by sastier-          #+#    #+#             */
/*   Updated: 2024/04/18 14:12:52 by sastier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_array(char **av)
{
	int	i;

	i = 1;
	while (av[i])
		free(av[i++]);
	free(av);
}

void	ft_lstclear_node(t_node **lst)
{
	t_node	*temp;

	if (!lst)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		free(*lst);
		*lst = temp;
	}
	*lst = NULL;
}

void	ft_clear_all(t_node **a, t_node **b, char **av, int ac)
{
	if (ac == 2)
		free_array(av - 1);
	ft_lstclear_node(a);
	ft_lstclear_node(b);
}
