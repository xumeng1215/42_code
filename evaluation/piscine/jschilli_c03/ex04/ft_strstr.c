/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschilli <jschilli@student.42.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 13:33:20 by jschilli          #+#    #+#             */
/*   Updated: 2023/12/05 10:33:14 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (*str != '\0')
	{
		while (str[i] != '\0' && to_find[i] != '\0' && str[i] == to_find[i])
		{
			i++;
		}
		if (to_find[i] == '\0')
		{
			//str[i] = '\0';
			return (str);
		}
		str++;
	}
	return (0);


#include <string.h>
int	main(void)
{
	char	str1[] = "cooool";
	char	str2[] = "oo";
	printf("thiers = %s\n", strstr(str1, str2));
	printf("haystack = %s\n", str1);
	printf("needle in haystack is = %s\n", ft_strstr(str1, str2));
	return (0);
}

