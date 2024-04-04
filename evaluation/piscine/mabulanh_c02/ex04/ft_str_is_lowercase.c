/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabulanh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:11:47 by mabulanh          #+#    #+#             */
/*   Updated: 2023/11/28 13:37:38 by mabulanh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
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

	A = "superman";
	B = "SUPERMAN";
	C = "007";
	printf("Is superman all lowercase letter? %d\n", ft_str_is_lowercase(&*A));
	printf("Is SUPERMAN all lowercase letter? %d\n", ft_str_is_lowercase(&*B));
	printf("Is 007 all lowercase letter? %d\n", ft_str_is_lowercase(&*C));
}
*/
