/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharrie <lcharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:17:36 by lcharrie          #+#    #+#             */
/*   Updated: 2024/03/09 20:00:34 by lcharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len
			&& needle[j] && haystack[i + j])
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char haystack[30] = "aaabaabcd";
// 	char needle[10] = "aabc";
// 	//char * empty = (char*)"abc";
// 	size_t		len;

// 	len = 1;
// 	printf("rep = %s\n", strnstr(haystack, needle, 7));
// 	printf("ma rep = %s\n", ft_strnstr(haystack, needle, 7));
// 	return (0);
// }
