/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:02:04 by ksaidi            #+#    #+#             */
/*   Updated: 2023/12/03 15:17:41 by ksaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	ft_strupcase(char *str)

{
	int	id;

	id = 0;
	while (str[id] != '\0')
	{
		if (str[id] >= 'a' && str[id] <= 'z')
		{
			str[id] = str[id] - ('a' - 'A');
		}
		id++;
	}
	return (str);
}
