/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharrie <lcharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 20:02:40 by lcharrie          #+#    #+#             */
/*   Updated: 2024/03/15 11:38:26 by lcharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	count;
	char	*new;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		new = malloc(1);
		if (new == NULL)
			return (NULL);
		new[0] = '\0';
		return (new);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	new = malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	count = 0;
	while (count < len && s[start])
		new[count++] = s[start++];
	new[count] = '\0';
	return (new);
}

//int	main(void)
//{
//	//char	s[] = "Helloyouu";
//	printf("rep = %s\n", ft_substr("Hello", 5, 5));
//	return (0);
//}
