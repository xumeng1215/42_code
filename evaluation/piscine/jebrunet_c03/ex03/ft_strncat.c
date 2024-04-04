/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebrunet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:19:20 by jebrunet          #+#    #+#             */
/*   Updated: 2023/11/22 14:47:22 by jebrunet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				j;
	int				k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[j] != '\0')
		j++;
	while (i < nb && src[k] != '\0')
	{
		dest[j] = src[k];
		j++;
		k++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}
/*
int main(void)
{
	char a[] = "Salut la piscine ";
	char b[] = "Noel arrive vite!!";

	printf("%s\n",a );
	ft_strncat(a, b, 19);
	printf("%s\n", a);
	return (0);
}*/
