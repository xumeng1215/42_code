/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:43:32 by ksaidi            #+#    #+#             */
/*   Updated: 2023/12/03 15:18:41 by ksaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 

int	ft_str_is_uppercase(char *str)

{
	int = id;
	id = 0;
	while (str[id] != '\0')
	{
		if (!(str[id] >= 'A' && str[id] <= 'Z'))
		{
			return (0);
		}
		id++;
	}
	return (1);
}
