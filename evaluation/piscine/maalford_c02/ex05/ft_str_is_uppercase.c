/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalford <maalford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:41:15 by maalford          #+#    #+#             */
/*   Updated: 2023/11/29 09:31:15 by maalford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
	printf("%d\n", ft_str_is_uppercase("1337"));
	printf("%d\n", ft_str_is_uppercase("hi"));
	printf("%d\n", ft_str_is_uppercase("HI"));
	printf("%d\n", ft_str_is_uppercase(""));
	return(0);
}*/
