/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charlie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:27:19 by charlie           #+#    #+#             */
/*   Updated: 2024/03/05 11:27:20 by charlie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Allocates (with malloc(3)) and returns a new
// string, which is the result of the concatenation
// of ’s1’ and ’s2’.

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*p;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	p = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (p == NULL)
		return (NULL);
	while (*s1 != '\0')
		*p++ = *s1++;
	while (*s2 != '\0')
		*p++ = *s2++;
	*p = '\0';
	return (p);
}
