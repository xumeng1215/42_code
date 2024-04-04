/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nisharma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:54:06 by nisharma          #+#    #+#             */
/*   Updated: 2023/12/04 11:39:31 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_strcmp(char *s1, char *s2)
{
	int		index;
	int		store;
	char	*temp;

	store = 0;
	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
		{
			store = (s1[index] - s2[index]);
		}
		index++;
	}
	if (store < 0)
	{
		temp = s1;
		s1 = s2;
		s2 = temp;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 1;
	if (argc > 2)
	{
		while (i + 1 < argc)
		{
			j = 1;
			while (j <= i)
			{
				ft_strcmp(argv[i], argv[i + 1]);
				j++;
			}
			i++;
		}
		i = 0;
		while (i++ < argc - 1)
		{
			while (*argv[i])
				write(1, argv[i]++, 1);
			write(1, "\n", 1);
		}
	}
	return (0);
}
