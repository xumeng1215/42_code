/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschilli <jschilli@student.42.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:05:27 by jschilli          #+#    #+#             */
/*   Updated: 2024/03/18 14:05:30 by jschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
int	main(void)
{
	char lower = 'c';
	char caps = 'A';
	char bracket = ')';

	printf("lower is now %c\n", ft_toupper(lower));
	printf("caps is now %c\n", ft_toupper(caps));
	printf("bracket is now %c\n", ft_toupper(bracket));
	return (0);
}*/
