/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:12:47 by yili              #+#    #+#             */
/*   Updated: 2023/12/03 10:51:47 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int			i;
	signed int	result;

	i = 0;
	result = 0;
	while (i < n)
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

	printf("%d\n", ft_strncmp(s1, s2, 3));
}
