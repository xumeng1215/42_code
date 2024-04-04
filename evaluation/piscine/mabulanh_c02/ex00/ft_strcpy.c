/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabulanh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:43:05 by mabulanh          #+#    #+#             */
/*   Updated: 2023/11/27 13:55:03 by mabulanh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*orig;

	orig = dest;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (orig);
}
/*
#include <unistd.h>
#include <string.h>

int	main(void)
{
	char A[]="Hello, World!";
	char B[15];

	write(1, "Using ft_strcpy: \n", 18);
	ft_strcpy(B, A);
	write(1, &A, 13);
	write(1, "\n",1);
	write(1, &B, 13);
	write(1, "\n", 1);
	write(1, "\n", 1);
	strcpy(B, A);
	write(1, "Using strcpy: \n", 15);
	write(1, &A, 13);
	write(1, "\n", 1);
	write(1, &B, 13);
	return (0);
}
*/
