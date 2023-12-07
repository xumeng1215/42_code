/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:24:46 by mexu              #+#    #+#             */
/*   Updated: 2023/11/30 10:30:54 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

/*
int main(void)
{
	char str[] = "affdss231231";
	
	printf("%s\n", str);	
	printf("%s\n", ft_strupcase(str));
	
	return (0);
}
*/

char	*ft_strupcase(char *str)
{
	char	*origin;

	origin = str;
	while (*origin != '\0')
	{
		if (*origin >= 'a' && *origin <= 'z')
		{
			*origin = *origin - 32;
		}
		origin++;
	}
	return (str);
}
