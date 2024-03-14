/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthompso <pthompso@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:15:10 by pthompso          #+#    #+#             */
/*   Updated: 2024/03/10 19:15:10 by pthompso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./libft.h"

static int	ft_numwords(const char *str, char c)
{
	int	n;

	n = 0;
	while (*str)
	{
		while (*str == c)
			str++;
		if (!*str)
			break ;
		n++;
		while (*str != c && *str)
			str++;
	}
	return (n);
}

static char	*ft_cutword(const char *str, char c)
{
	const char	*t;
	int			i;
	char		*res;

	i = 0;
	while (*str == c)
		str++;
	if (*str == '\0')
		return ((char *) 0);
	t = str;
	while (*str != c && *str)
	{
		str++;
		i++;
	}
	res = malloc(sizeof(char) * (i + 1));
	if (res == NULL)
		return (NULL);
	str = t;
	t = res;
	while (*str != c && *str)
		*res++ = *str++;
	*res = '\0';
	return ((char *) t);
}

char	**ft_split(const char *str, char c)
{
	char	**res;
	int		i;
	int		numwords;

	i = 0;
	if (str == NULL)
		return (NULL);
	numwords = ft_numwords(str, c);
	res = malloc((sizeof(char *) * (numwords + 1)));
	if (res == NULL)
		return (NULL);
	while (i < numwords)
	{
		while (*str == c)
			str++;
		if (*str == '\0')
			break ;
		res[i] = ft_cutword(str, c);
		if (res[i++] == NULL)
			return (NULL);
		while (*str != c && *str)
			str++;
	}
	res[i] = NULL;
	return (res);
}
