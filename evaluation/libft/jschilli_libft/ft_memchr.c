/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschilli <jschilli@student.42.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:39:01 by jschilli          #+#    #+#             */
/*   Updated: 2024/03/18 13:39:56 by jschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	chr;

	chr = (unsigned char) c;
	i = 0;
	str = (unsigned char *) s;
	while (n > i)
	{
		if (str[i] == chr)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	const char	str[] = "wowe.ere";
	const char	ch = '.';

	printf("looking for %c\n found %s\n", ch, ft_memchr(str, ch, 4));
	return (0);
}
*/
