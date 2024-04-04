/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebrunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:33:29 by jebrunet          #+#    #+#             */
/*   Updated: 2023/12/03 15:03:48 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			++j;
		}
		++i;
	}
	return (0);
}

int	main(void)
{
	char	*str = "Salut, c'est tool Teckno ";
	char	*to_find = "tool";
	char	*result = ft_strstr(str, to_find);
	
	printf("String: %s\n", str);
	printf("To find: %s\n", to_find);
	if (result == NULL)
	{
		printf("the word '%s' does not exist in the string", to_find);
	}
	else
	{
		printf("the word '%s' exist in the string", result);
	}
	return (0);
}
