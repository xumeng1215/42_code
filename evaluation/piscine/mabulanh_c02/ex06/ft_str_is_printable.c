/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabulanh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 13:55:12 by mabulanh          #+#    #+#             */
/*   Updated: 2023/11/28 13:42:27 by mabulanh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
			return (0);
		str++;
	}
	return (1);
}
/*
int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello\nWorld!";
    char str3[] = "";

    printf("Is '%s' printable? %d\n", str1, ft_str_is_printable(str1));
    printf("Is '%s' printable? %d\n", str2, ft_str_is_printable(str2));
    printf("Is '%s' printable? %d\n", str3, ft_str_is_printable(str3));

    return 0;
}
*/
