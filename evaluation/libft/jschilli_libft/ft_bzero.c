/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschilli <jschilli@student.42.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:30:39 by jschilli          #+#    #+#             */
/*   Updated: 2024/03/18 13:30:43 by jschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*src;

	i = 0;
	src = (char *)s;
	while (i < n)
		src[i++] = 0;
}
/*
int	main(void)
{
	char	str[] = "wowowererrerrr";

	printf("str was: %s\n", str);
	ft_bzero(str, 10);
	printf("str is now: %s\n", str);
	return (0);
}
*/
