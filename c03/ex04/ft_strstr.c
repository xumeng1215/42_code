/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:29:56 by mexu              #+#    #+#             */
/*   Updated: 2023/11/30 11:01:52 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

/*
int	main(void)
{
	char	*s1 = "Hhhhhhhshhhhhh";
	char	*s2 = "cc";

	printf("%s\n", strstr(s1, s2));
	printf("%s\n", ft_strstr(s1, s2));
	return(0);
}
*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		i = 0;
		while (to_find[i] == str[i])
		{
			i++;
			if (to_find[i] == '\0')
				return (str);
		}
		str++;
	}
	return (NULL);
}
