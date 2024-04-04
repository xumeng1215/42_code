/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtripodi <mtripodi@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:29:22 by mtripodi          #+#    #+#             */
/*   Updated: 2023/12/04 11:54:11 by mtripodi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[c] != '\0')
	{
		while (str[c + i] == to_find[i] && str[c + i] != '\0')
		{
			i++;
			if (to_find[i] == '\0')
				return (&str[c]);
		}
		c++;
		i = 0;
	}
	return (NULL);
}
/*
int main(void)
{
	char string[50] = "Zebra";
	char matching[] = "Zebra";
	char higher[] = "ant";
	char less[] = "ebra";
	char str2cm[] = "ebre";
	char str2cdh[] = "a";
	char str2cdl[] = "eb";

	printf("string vs matching: %s\n", ft_strstr(string, matching));
	printf("string vs higher: %s\n", ft_strstr(string, higher));
	printf("string vs less: %s\n", ft_strstr(string, less));
	printf("string vs str2char matching: %s\n", ft_strstr(string, str2cm));
	printf("string vs str2char higher: %s\n", ft_strstr(string, str2cdh));
	printf("string vs str2char lower: %s\n", ft_strstr(string, str2cdl));

	printf("\nactual function below\n");
	printf("string vs matching: %s\n", strstr(string, matching));
	printf("string vs higher: %s\n", strstr(string, higher));
	printf("string vs less: %s\n", strstr(string, less));
	printf("string vs str2char matching: %s\n", strstr(string, str2cm));
	printf("string vs str2char higher: %s\n", strstr(string, str2cdh));
	printf("string vs str2char lower: %s\n", strstr(string, str2cdl));

	return (0);
}
*/
