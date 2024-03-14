/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthompso <pthompso@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:15:00 by pthompso          #+#    #+#             */
/*   Updated: 2024/03/10 19:15:01 by pthompso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./libft.h"

char	*ft_strdup(const char *src)
{
	char	*strstart;
	char	*strend;

	strstart = malloc(ft_strlen(src) + 1);
	if (strstart == NULL)
		return (NULL);
	strend = strstart;
	while (*src)
		*strend++ = *src++;
	*strend = '\0';
	return (strstart);
}
