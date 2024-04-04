/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lessisters <lessisters@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:00:38 by lcharrie          #+#    #+#             */
/*   Updated: 2024/03/17 14:39:13 by lessisters       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_convert(const	char *str, int comp, int comp2)
{
	int	nb;

	nb = 0;
	while (comp2 <= comp)
	{
		if (str[comp2] < '0' || str[comp2] > '9')
			return (nb);
		nb = nb * 10 + (str[comp2] - '0');
		comp2++;
	}
	return (nb);
}

void	ft_neg(const	char *str, int *comp, int *nb_sign, int *neg)
{
	while (str[*comp] == '+' || str[*comp] == '-')
	{
		if (str[*comp] == '-')
			*neg *= -1;
		*comp += 1;
		*nb_sign += 1;
	}
}

int	ft_atoi(const	char *str)
{
	int	comp;
	int	comp2;
	int	neg;
	int	rep;
	int	nb_sign;

	comp = 0;
	neg = 1;
	nb_sign = 0;
	while (str[comp] == ' ' || (str[comp] >= '\t' && str[comp] <= '\r'))
		comp++;
	ft_neg(str, &comp, &nb_sign, &neg);
	if (nb_sign > 1)
		return (0);
	comp2 = comp;
	while (str[comp] >= '0' && str[comp] <= '9')
		comp++;
	comp -= 1;
	rep = ft_convert(str, comp, comp2);
	return (neg * rep);
}
