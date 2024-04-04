/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharrie <lcharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:38:20 by lessisters        #+#    #+#             */
/*   Updated: 2024/03/17 17:35:56 by lcharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_neg(int *n, int *fd, char lettre, int *big_divi)
{
	write(*fd, "-", 1);
	*n = -(*n);
	if (*n == -2147483648 || *n == -2147483648L || *n == -2147483648LL)
	{
		write(*fd, "2147483648", 10);
	}
	else if (*n < 10)
	{
		lettre = *n + '0';
		write(*fd, &lettre, 1);
	}
	else
	{
		while (*n / *big_divi > 9)
			*big_divi *= 10;
		while (*big_divi > 0)
		{
			lettre = *n / *big_divi + '0';
			write(*fd, &lettre, 1);
			*n = *n % *big_divi;
			*big_divi /= 10;
		}
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	char	lettre;
	int		big_divi;

	big_divi = 1;
	lettre = 0;
	if (n < 0)
		ft_neg(&n, &fd, lettre, &big_divi);
	else if (n < 10)
	{
		lettre = n + '0';
		write(fd, &lettre, 1);
	}
	else
	{
		while (n / big_divi > 9)
			big_divi *= 10;
		while (big_divi > 0)
		{
			lettre = n / big_divi + '0';
			write(fd, &lettre, 1);
			n = n % big_divi;
			big_divi /= 10;
		}
	}
}

// int	main(void)
// {
// 	ft_putnbr_fd(-2147483648, 1);
// 	return (0);
// }
