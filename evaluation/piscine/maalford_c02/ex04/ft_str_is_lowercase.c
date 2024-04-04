/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalford <maalford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:31:48 by maalford          #+#    #+#             */
/*   Updated: 2023/11/28 14:39:41 by maalford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_str_is_lowercase("HI"));
	printf("%d\n", ft_str_is_lowercase("hi"));
	printf("%d\n", ft_str_is_lowercase(""));
	return(0);
}*/
