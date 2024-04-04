/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:51:22 by yili              #+#    #+#             */
/*   Updated: 2023/12/03 10:50:34 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int			i;
	signed int	result;

	i = 0;
	result = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
		{
			result = s1[i] - s2[i];
			return (result);
		}
		i++;
	}
	return (result);
}

#include <stdio.h>
int main()
{
	char *s1 = "abc";
	char *s2 = "";

	printf("%d\n", ft_strcmp(s1, s2));
}
