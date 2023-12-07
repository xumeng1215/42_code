/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:30:10 by mexu              #+#    #+#             */
/*   Updated: 2023/12/01 09:24:43 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

/*
int main(void)
{
	char str[] = "salut, as ? 42mots qDDeux; cinqe+et+un.";
		
	printf("%s\n", str);
	printf("%s\n", ft_strcapitalize(str));
	
	return (0);
}
*/

int	ft_is_letter(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		return (1);
	else if (*c >= 'A' && *c <= 'Z')
		return (1);
	else if (*c >= '0' && *c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_lowcase(char *str)
{
	char	*save;

	save = str;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return (save);
}

char	*ft_strcapitalize(char *str)
{
	int		need_action;
	char	*save;

	str = ft_lowcase(str);
	save = str;
	need_action = 1;
	while (*str != '\0')
	{
		if (need_action == 1 && ft_is_letter(str))
		{
			if (*str >= 'a' && *str <= 'z')
			{
				*str = *str - ('a' - 'A');
				need_action = 0;
			}
			else
				need_action = 0;
		}
		if (!ft_is_letter(str))
			need_action = 1;
		str++;
	}
	return (save);
}
