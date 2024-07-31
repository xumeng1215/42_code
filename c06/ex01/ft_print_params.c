/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 09:51:25 by mexu              #+#    #+#             */
/*   Updated: 2023/12/03 09:58:27 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_output(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **arg)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_output(arg[i]);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
