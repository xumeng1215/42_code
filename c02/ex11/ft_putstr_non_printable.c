/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:37:03 by mexu              #+#    #+#             */
/*   Updated: 2023/11/30 10:45:37 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str);

/*
int main(void)
{
	char source[] = "Coucou\ntu vas bien ?";
		
	ft_putstr_non_printable(source);
	
	return (0);
}
*/

void	ft_putstr_non_printable(char *str)
{
	char	hex[16];
	int		i;
	int		j;

	i = 0;
	while (i < 16)
	{
		hex[i] = "0123456789abcdef"[i];
		i++;
	}
	while (*str != '\0')
	{
		if (*str < 32 || *str > 126)
		{
			i = *str / 16;
			j = *str % 16;
			write(1, "\\", 1);
			write(1, &hex[i], 1);
			write(1, &hex[j], 1);
		}
		else
			write(1, str, 1);
		str++;
	}
}
