/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yiuwong <yiuwong@student.42adel.org.au>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 00:48:02 by yiuwong           #+#    #+#             */
/*   Updated: 2023/12/08 00:52:53 by yiuwong          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	j;
	int	count;

	if (!tab)
		return ;
	count = 0;
	while (tab[count])
		count++;
	i = 0;
	while (i < count - 1)
	{
		j = 0;
		while (j < count - i - 1)
		{
			if ((*cmp)(tab[j], tab[j + 1]) > 0)
				swap(tab + j, tab + j + 1);
			j++;
		}
		i++;
	}
}
/*
int	ft_strcmp(char *s1, char *s2)
{
	int	diff;

	while (*s1 != '\0')
	{
		diff = *s1 - *s2;
		if (diff == 0)
		{
			s1++;
			s2++;
		}
		else
		{
			return (diff);
		}
	}
	return (*s1 - *s2);
}

int	main(void)
{
	char	*tab[] = {"b", "a", "123", "Elephant", 0};
	char	**p;

	ft_advanced_sort_string_tab(tab, ft_strcmp);
	p = tab;
	while (*p)
	{
		printf("%s ", *p);
		p++;
	}
	printf("\n");
	return (0);
}
*/