/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschilli <jschilli@student.42.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:05:03 by jschilli          #+#    #+#             */
/*   Updated: 2024/03/20 14:23:28 by jschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_newstr(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*ptr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	if ((ft_strlen(s) - start) < len)
		len = ft_strlen(s) - start;
	str = ft_newstr(len);
	if (!str)
		return (NULL);
	s += start;
	ptr = str;
	*(str + len) = '\0';
	while (len-- && *s)
		*str++ = *s++;
	return (ptr);
}
/*
int	main()
{
	char	str[] = "yayayananana";

	printf("%s\n", ft_substr(str, 5, 3));
	return (0);
}
*/
