/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabulanh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:59:53 by mabulanh          #+#    #+#             */
/*   Updated: 2023/11/28 13:08:58 by mabulanh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
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
	C = "Number5";

	printf("Is Superman an alphabet? %d\n", ft_str_is_alpha(&*A));
	printf("Is Spider-man an alphabet? %d\n", ft_str_is_alpha(&*B));
	printf("Is Number5 an alphabet? %d\n", ft_str_is_alpha(&*C));
	
	return(0);
}
*/
