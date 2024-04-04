/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabulanh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:35:38 by mabulanh          #+#    #+#             */
/*   Updated: 2023/11/29 12:43:11 by mabulanh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*start;

	start = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
	return (start);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[] = "Hamburger";

	printf("%s\n", str);
	printf("%s\n", ft_strupcase(str));
	return (0);
}
*/
