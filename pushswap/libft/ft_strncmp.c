/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charlie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:24:17 by charlie           #+#    #+#             */
/*   Updated: 2024/03/05 11:24:19 by charlie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
DESCRIPTION
     The strcmp() and strncmp() functions lexicographically compare the null-ter-
     minated strings s1 and s2.

     The strncmp() function compares not more than n characters.  Because
     strncmp() is designed for comparing strings rather than binary data, charac-
     ters that appear after a `\0' character are not compared.

RETURN VALUES
     The strcmp() and strncmp() functions return an integer greater than, equal
     to, or less than 0, according as the string s1 is greater than, equal to, or
     less than the string s2.  The comparison is done using unsigned characters,
     so that `\200' is greater than `\0'.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 != '\0' && *s2 != '\0' && n > 0)
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	if (n > 0)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (0);
}
