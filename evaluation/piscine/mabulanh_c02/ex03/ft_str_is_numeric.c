/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabulanh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:37:00 by mabulanh          #+#    #+#             */
/*   Updated: 2023/11/28 13:10:52 by mabulanh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	char *A;
	char *B;
	char *C;

	A = "Superman";
	B = "Spider-man";
	C = "007";
	printf("Is Superman numeric? %d\n", ft_str_is_numeric(&*A));
	printf("Is Spider-man numeric %d\n", ft_str_is_numeric(&*B));
	printf("Is 007 numeric %d\n", ft_str_is_numeric(&*C));
}
*/
