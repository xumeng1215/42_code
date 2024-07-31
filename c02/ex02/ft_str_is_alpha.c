/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:10:33 by mexu              #+#    #+#             */
/*   Updated: 2023/11/29 11:14:09 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

/*
int main(void)
{
	char *str = "hello1";
	
	printf("return %d\n", ft_str_is_alpha(str));
	return (0);
}
*/

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (*str < 'A' || (*str > 'Z' && *str < 'a') || *str > 'z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
