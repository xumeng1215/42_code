/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <achiu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 15:14:52 by achiu             #+#    #+#             */
/*   Updated: 2024/05/08 15:30:09 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	bit_handler(int bit)
{
	static int				i;
	static unsigned char	c;

	c = c * 2 + bit % 30;
	i++;
	if (i == 8)
	{
		ft_printf("%c", c);
		i = 0;
		c = 0;
	}
}

int	main(void)
{
	ft_printf("server PID: %d\n", getpid());
	while (1)
	{
		signal(SIGUSR2, bit_handler);
		signal(SIGUSR1, bit_handler);
		pause();
	}
	return (0);
}

// void	print_bits(unsigned char octet)
// {
// 	int	i;
// 	unsigned char bit;
// 	i = 8;
// 	while (i--)
// 	{
// 		bit = ((octet >> i) & 1) + '0';
// 		write(1, &bit, 1);
// 	}
// 	write(1, "\n", 1);
// }