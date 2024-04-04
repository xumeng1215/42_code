/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabulanh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:47:02 by mabulanh          #+#    #+#             */
/*   Updated: 2023/11/28 13:42:00 by mabulanh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
			return (0);
		str++;
	}
	return (1);
}
/*
int main() {
    char str1[] = "HELLOWORLD";
    char str2[] = "HelloWorld";
    char str3[] = "";

    printf("Is '%s' uppercase? %d\n", str1, ft_str_is_uppercase(str1));
    printf("Is '%s' uppercase? %d\n", str2, ft_str_is_uppercase(str2));
    printf("Is '%s' uppercase? %d\n", str3, ft_str_is_uppercase(str3));

    return 0;
}
*/
