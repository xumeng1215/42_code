/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharrie <lcharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:24:07 by lcharrie          #+#    #+#             */
/*   Updated: 2024/03/17 16:24:10 by lcharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_put_in_s2(int *pos, char **s2, const char *s, int size)
{
	int		count;
	char	*s3;

	count = 0;
	s3 = malloc(sizeof(char) * (pos[1] - pos[0] + 2));
	if (!s3)
		return ;
	while (pos[0] <= pos[1])
		s3[count++] = s[pos[0]++];
	s3[count] = '\0';
	s2[size] = s3;
}

int	ft_find_size_s2(char const *s, char c)
{
	int	count;
	int	size;

	count = 0;
	size = 0;
	while (s[count])
	{
		if (s[count] != c)
		{
			while (s[count] != c && s[count])
				count++;
			size++;
		}
		else if (s[count] == c)
			count++;
	}
	return (size);
}

char	**ft_allocate_memory(const char *s, char c)
{
	char	**s2;
	int		size;

	if (!s || !*s)
	{
		s2 = malloc(sizeof(char *));
		if (s2)
			*s2 = NULL;
		return (s2);
	}
	size = (ft_find_size_s2(s, c) + 1);
	return (malloc(sizeof(char *) * size));
}

void	ft_fill_s2(char const *s, char c, char **s2)
{
	int		count;
	int		pos[3];
	int		size;

	count = 0;
	size = 0;
	while (s[count])
	{
		if (s[count] != c)
		{
			pos[0] = count;
			pos[1] = count - 1;
			while (s[count] != c && pos[1] < (int)ft_strlen(s) - 1)
			{
				pos[1]++;
				count++;
			}
			ft_put_in_s2(pos, s2, s, size);
			size++;
		}
		else if (s[count] == c)
			count++;
	}
	s2[size] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**s2;

	s2 = ft_allocate_memory(s, c);
	if (!s2)
		return (NULL);
	ft_fill_s2(s, c, s2);
	return (s2);
}
