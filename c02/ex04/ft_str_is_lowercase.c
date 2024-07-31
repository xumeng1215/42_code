/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:18:58 by mexu              #+#    #+#             */
/*   Updated: 2023/11/29 11:20:56 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

/*
int main(void)
{
	char *str = " ";
	
	printf("return %d\n", ft_str_is_lowercase(str));
	return (0);
}
*/

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
