/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharrie <lcharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:43:28 by lessisters        #+#    #+#             */
/*   Updated: 2024/03/15 11:35:21 by lcharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_in_set(char c, const char *set)
{
	int	count;

	count = 0;
	while (set[count])
	{
		if (c == set[count])
			return (1);
		count++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*s2;

	start = 0;
	end = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_is_in_set(s1[start], set))
		start++;
	while (end > start && ft_is_in_set(s1[end], set))
		end--;
	s2 = ft_substr(s1, start, end - start + 1);
	return (s2);
}

//int	main(void)
//{
//	//char s1[] = "abcd";
//	//char set[] = "bdaa";
//	//char * s = ft_strtrim("   xxxtripouille", " x");
//	char s1[] = "llllmorem ipsum dolor sit amet";
//
//	printf("rep = %s\n", ft_strtrim(s1, " lttemam"));
//	return (0);
//}