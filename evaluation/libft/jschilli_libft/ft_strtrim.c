/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschilli <jschilli@student.42.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:04:10 by jschilli          #+#    #+#             */
/*   Updated: 2024/03/18 15:46:27 by jschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_stringl(const char *s1)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}

static int	ft_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	i = 0;
	start = 0;
	end = ft_stringl(s1);
	while (s1[start] && ft_set(s1[start], set))
		start++;
	while (end > start && ft_set(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}
/*
int	main()
{
	char	str[] = "woweaekeemkanlll";
	char	set[] = "wowmane";

	printf("%s\n", ft_strtrim(str, set));
	return (0);
}*/
