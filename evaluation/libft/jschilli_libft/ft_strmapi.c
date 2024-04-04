/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschilli <jschilli@student.42.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:02:01 by jschilli          #+#    #+#             */
/*   Updated: 2024/03/19 15:44:17 by jschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*string;

	if (!s || !f)
		return (0);
	string = malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!string)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		string[i] = f(i, s[i]);
		i++;
	}
	string[i] = '\0';
	return (string);
}
/*
char	ft_toupper(unsigned int, char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

int	main()
{
	char	str[] = "wowowee";
	
	printf("%s\n", str);
	printf("%s\n", ft_strmapi(str, &ft_toupper));
	return (0);
}*/
