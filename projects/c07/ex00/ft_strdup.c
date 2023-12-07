/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 13:13:42 by mexu              #+#    #+#             */
/*   Updated: 2023/12/04 10:32:05 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_str_len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*copy;

	copy = (char *)malloc(sizeof(char) * (ft_str_len(src) + 1));
	if (!copy)
		return (0);
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/*
int	main(void)
{
	char	*str = "abcd";
	char	*str2 = ft_strdup(str);
	char	*str3 = strdup(str);
	char	*str4 = ft_strdup(ft_strdup(str));
	printf("%s-%p\n", str, str);
	printf("%s-%p\n", str2, str2);
	printf("%s-%p\n", str3, str3);
	printf("%s-%p\n", str4, str4);
	return (0);
}
*/
