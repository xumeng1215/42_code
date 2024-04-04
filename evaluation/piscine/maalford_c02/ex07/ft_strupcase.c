/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalford <maalford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:08:57 by maalford          #+#    #+#             */
/*   Updated: 2023/12/02 13:51:36 by maalford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
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
	char str[] = "hello";

	ft_strupcase(str);
	printf("%s\n", str);
	return (0);
}*/
