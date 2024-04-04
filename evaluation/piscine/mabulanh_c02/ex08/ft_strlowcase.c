/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabulanh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:49:45 by mabulanh          #+#    #+#             */
/*   Updated: 2023/11/29 13:51:19 by mabulanh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*start;

	start = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return (start);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "HAMBURGER";

	printf("%s\n", str);
	printf("%s\n", ft_strlowcase(str));
	return (0);
}
*/
