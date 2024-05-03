/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atof.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cadlard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 11:31:42 by cadlard           #+#    #+#             */
/*   Updated: 2024/04/24 12:40:43 by cadlard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_isspace(char c)
{
	return (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ');
}

static int	end_idx(char *str, int i, int *found_period)
{
	*found_period = 0;
	while (ft_isdigit(str[i])
		|| (str[i] == '.' && !(*found_period)))
	{
		if (str[i] == '.')
			*found_period = 1;
		i++;
	}
	return (i);
}

static double	tod(char *str, int i)
{
	int		end;
	int		period;
	double	left;
	double	right;

	end = end_idx(str, i, &period);
	left = (double)ft_atoi(str + i);
	right = 0.0;
	if (period)
	{
		end--;
		while (str[end] != '.')
		{
			right /= 10;
			right += (str[end] - '0') / 10.0;
			end--;
		}
	}
	return (left + right);
}

double	ft_atod(char *str)
{
	int		i;
	double	sign;
	double	num;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	sign = 1.0;
	if (str[i] == '-')
	{
		sign = -1.0;
		i++;
	}
	else if (str[i] == '+')
		i++;
	num = tod(str, i);
	return (num * sign);
}
