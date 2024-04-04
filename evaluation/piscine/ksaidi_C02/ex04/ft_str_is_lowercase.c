/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksaidi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 12:55:09 by ksaidi            #+#    #+#             */
/*   Updated: 2023/12/03 12:55:19 by ksaidi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)

{
	int	id;

	id = 0;
	while (str[id] != '\0')
	{
		if (!(str[id] >= 'a' && str[id] <= 'z'))
			return (0);
		id++;
	}
	return (1);
}
