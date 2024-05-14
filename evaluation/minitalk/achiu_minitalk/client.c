/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <achiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:14:41 by achiu             #+#    #+#             */
/*   Updated: 2024/05/08 17:48:24 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_bit(int pid, char c)
{
	int	shift;

	shift = 8;
	while (shift--)
	{
		if (c >> shift & 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(300);
	}
}

int	main(int ac, char **av)
{
	int	i;

	if (ac == 3)
	{
		i = 0;
		while (av[2][i])
			send_bit(ft_atoi(av[1]), av[2][i++]);
	}
	else
		write(1, "format: ./client <PID> <MESSAGE>\n", 33);
	return (0);
}

// printf("SIGUSR2 = 31\n");
// printf("SIGUSR1 = 30\n");