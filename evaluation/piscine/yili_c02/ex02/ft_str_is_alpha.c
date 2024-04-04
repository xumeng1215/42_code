/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 21:01:33 by yili              #+#    #+#             */
/*   Updated: 2023/11/28 21:01:34 by yili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	is_alpha;

	i = 0;
	is_alpha = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
			{
				is_alpha = 0;
			}
		}
		i++;
	}
	return (is_alpha);
}

/*
int	main(void)
{
	char str[20] = "fdg4a";
	int	result = ft_str_is_alpha(str);
	printf("%d", result);
	return (0);
}
*/
