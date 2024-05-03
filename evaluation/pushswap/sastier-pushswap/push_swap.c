/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sastier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:13:22 by sastier-          #+#    #+#             */
/*   Updated: 2024/04/17 12:13:24 by sastier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *av[])
{
	t_node	*a;
	t_node	*b;

	b = NULL;
	if (ac < 2 || av_empty(av + 1) == 1)
		return (0);
	if (ac == 2)
		av = ft_split(av[1], ' ');
	a = create_stack(av + 1, ac);
	if (!a && ac > 1)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (ft_stack_sorted(a) == 1)
	{
		ft_clear_all(&a, &b, av + 1, ac);
		return (1);
	}
	if (ft_lstsize_node(a) <= 3)
		small_sort(&a);
	else
		big_sort(&a, &b);
	ft_clear_all(&a, &b, av + 1, ac);
	return (0);
}
