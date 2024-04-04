/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalford <maalford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:50:17 by maalford          #+#    #+#             */
/*   Updated: 2023/12/02 13:53:32 by maalford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	str[i] = '\0';
	return (str);
}

/*#include <stdio.h>
int main(void)
{
	char str[] = "HELLO";

	ft_strlowcase(str);
	printf("%s\n", str);
	return (0);
}*/
