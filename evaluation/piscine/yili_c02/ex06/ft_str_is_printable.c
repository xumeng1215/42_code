/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:08:59 by yili              #+#    #+#             */
/*   Updated: 2023/11/29 17:12:20 by yili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	is_printable;
	int	i;

	i = 0;
	is_printable = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			is_printable = 0;
		}
		i++;
	}
	return (is_printable);
}
