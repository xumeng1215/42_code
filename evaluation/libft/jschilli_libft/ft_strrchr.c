/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschilli <jschilli@student.42.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:03:35 by jschilli          #+#    #+#             */
/*   Updated: 2024/03/18 14:04:03 by jschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			chr;
	char			*res;

	res = NULL;
	i = 0;
	chr = (char) c;
	while (s[i] != '\0')
	{
		if (s[i] == chr)
			res = (char *) &s[i];
		i++;
	}
	if (s[i] == chr)
		res = (char *) &s[i];
	return (res);
}
/*
int	main()
{
	const char	str[] = "ooower.er";
	const char	chr = '.';

	printf("looking for: %c\n answer is %s\n", chr, ft_strrchr(str, chr));
	printf("looking for: %c\n answer is %s\n", chr, ft_strrchr(str, chr));
	return (0);
}*/
