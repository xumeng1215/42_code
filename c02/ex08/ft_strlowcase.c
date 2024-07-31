/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:27:31 by mexu              #+#    #+#             */
/*   Updated: 2023/11/30 10:29:25 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

/*
int main(void)
{
	char str[] = "afsAFERQWQ31";
		
	printf("%s\n", str);
	printf("%s\n", ft_strlowcase(str));
	return (0);
}
*/

char	*ft_strlowcase(char *str)
{
	char	*origin;

	origin = str;
	while (*origin != '\0')
	{
		if (*origin >= 'A' && *origin <= 'Z')
		{
			*origin = *origin + 32;
		}
		origin++;
	}
	return (str);
}
