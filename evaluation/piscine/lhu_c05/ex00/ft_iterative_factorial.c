/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:13:15 by lhu               #+#    #+#             */
/*   Updated: 2023/11/29 12:50:41 by lhu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	ret;

	if (nb < 0)
		return (0);
	ret = 1;
	while (nb > 0)
	{
		ret *= nb;
		nb--;
	}
	return (ret);
}
/*
int	main()
{
	printf("%d \n",ft_iterative_factorial(0));
	return 0;
}
*/
