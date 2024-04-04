/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthompso <pthompso@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:26:36 by pthompso          #+#    #+#             */
/*   Updated: 2024/03/11 17:26:50 by pthompso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./libft.h"

static int	ft_in(char c, const char *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*res;
	int		firsts;
	int		lasts;
	int		i;

	firsts = 0;
	lasts = 0;
	while (ft_in(s1[firsts], set))
		firsts++;
	i = ft_strlen(s1) - 1;
	while (ft_in(s1[i], set))
	{
		i--;
		lasts++;
	}
	i = ft_strlen(s1) - lasts - firsts;
	if (i <= 0)
		return (ft_strdup(""));
	res = malloc(i + 1);
	if (res == NULL)
		return (NULL);
	ft_memcpy(res, s1 + firsts, i);
	res[i] = '\0';
	return (res);
}
