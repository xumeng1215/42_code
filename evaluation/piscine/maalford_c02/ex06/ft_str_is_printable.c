/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maalford <maalford@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:44:42 by maalford          #+#    #+#             */
/*   Updated: 2023/11/29 10:08:25 by maalford         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	printf("%d\n", ft_str_is_printable("1337"));
	printf("%d\n", ft_str_is_printable(""));
	printf("%d\n", ft_str_is_printable("\a"));
	return (0);
}*/
