/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschilli <jschilli@student.42.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:59:30 by jschilli          #+#    #+#             */
/*   Updated: 2024/03/19 15:12:13 by jschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
/*
int	main()
{
	const char	str[] = "ooowerer";
	const char	ch = 'e';

	printf("looking for: %c\n answer is %s\n", ch, ft_strchr(str, ch));
	printf("looking for: %c\n answer is %s\n", ch, ft_strchr(str, ch));
	return (0);
}*/
