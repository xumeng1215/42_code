/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaca-or <rbaca-or@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:57:16 by rbaca-or          #+#    #+#             */
/*   Updated: 2023/11/30 18:34:01 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (48 <= str[i] && str[i] <= 57)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main(void)
{
	printf("%d", ft_str_is_numeric("Sleep Deprived"));
	printf("%d\n", ft_str_is_numeric("90210"));
}
*/
