/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 09:48:45 by yili              #+#    #+#             */
/*   Updated: 2023/12/03 10:58:21 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	pos;
	unsigned int	i;

	if (!to_find)
		return (str);
	pos = 0;
	while (str[pos] != '\0')
	{
		if (str[pos] == to_find[0])
		{
			i = 1;
			while (to_find[i] != '\0' && str[pos + i] == to_find[i])
				++i;
			if (to_find[i] == '\0')
				return (&str[pos]);
		}
		++pos;
	}
	return (0);
}

#include <stdio.h>
int main()
{
	char *s1 = "abcd12333ddd";
	char *s2 = "123";

	printf("%s\n", ft_strstr(s1, s2));

	return (0);
}
