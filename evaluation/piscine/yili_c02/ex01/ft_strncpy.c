/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:40:30 by yili              #+#    #+#             */
/*   Updated: 2023/12/03 15:53:53 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int	len;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src [i];
		i++;
	}
	if (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}


#include <stdio.h>
int	main(void)
{
	char	*str1 = "abc";
	char	*str2 = "";

	printf("%s\n", ft_strncpy(str1, str2, 2));
	return (0);
}

