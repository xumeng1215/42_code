/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sastier- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:33:36 by sastier-          #+#    #+#             */
/*   Updated: 2024/04/23 20:33:38 by sastier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	extention(t_node *a, t_node *b)
{
	if (ft_stack_sorted(a) && !b)
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
}

int	main(int ac, char **av)
{
	char	*line;
	t_node	*a;
	t_node	*b;

	b = NULL;
	if (ac < 2 || av_empty(av + 1) == 1)
		return (0);
	if (ac == 2)
		av = ft_split(av[1], ' ');
	a = create_stack(av + 1, ac);
	if (!a && ac > 1)
		return (write(2, "Error\n", 6));
	line = NULL;
	while (get_next_line(0, &line) == 1)
	{
		if (ft_select_instruction(line, &a, &b) == 0)
			ft_clear_all(&a, &b, av + 1, ac);
		free(line);
		if (!a)
			return (write(2, "Error\n", 6));
	}
	extention(a, b);
	ft_clear_all(&a, &b, av + 1, ac);
	return (0);
}
