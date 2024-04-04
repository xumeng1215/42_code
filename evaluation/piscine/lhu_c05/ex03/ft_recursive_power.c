/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:59:52 by lhu               #+#    #+#             */
/*   Updated: 2023/11/29 12:57:02 by lhu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
/*
int main()
{
	printf("%d \n", ft_recursive_power(4,4));
}
*/
