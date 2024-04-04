/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:29:56 by clwong            #+#    #+#             */
/*   Updated: 2023/12/05 14:31:06 by clwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_params(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
			if (argv[i][j] == '\0')
			{
				write(1, "\n", 1);
			}
		}
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	length;

	length = argc;
	while (length -1)
	{
		i = 0;
		j = 1;
		while (j < length)
		{
			if ((ft_strcmp(argv[i], argv[j])) > 0)
			{
				ft_swap(&argv[i], &argv[j]);
			}
			i++;
			j++;
		}
		length--;
	}
	print_params(argc, argv);
	return (0);
}
