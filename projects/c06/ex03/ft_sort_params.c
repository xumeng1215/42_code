/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 09:51:51 by mexu              #+#    #+#             */
/*   Updated: 2023/12/03 12:29:53 by mexu             ###   ########.fr       */
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

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0')
		i++;
	return (str1[i] - str2[i]);
}

void	ft_swap(char *str1, char *str2)
{
	char	*temp;

	temp = str1;
	str1 = str2;
	str2 = temp;
}

int	main(int argc, char *arg[])
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		j = i;
		while (j < (argc - 1) && (ft_strcmp(arg[j], arg[j + 1]) > 0))
		{
			temp = arg[j];
			arg[j] = arg[j + 1];
			arg[j + 1] = temp;
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_output(arg[i]);
		ft_output("\n");
		i++;
	}
	return (0);
}
