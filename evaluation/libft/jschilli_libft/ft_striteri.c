/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschilli <jschilli@student.42.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:00:38 by jschilli          #+#    #+#             */
/*   Updated: 2024/03/19 15:43:59 by jschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (*s)
	{
		(*f)(i, s);
		s++;
		i++;
	}
}
/*
void	ft_toupper(unsigned int, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c - 32;
	return;
}

int	main()
{
	char	str[] = "wowowee";

	printf("%s\n", str);
	ft_striteri(str, &ft_toupper);
	printf("%s\n", str);
	return (0);
}*/
