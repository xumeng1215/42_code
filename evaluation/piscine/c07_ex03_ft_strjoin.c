/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuyvo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:01:29 by thuyvo            #+#    #+#             */
/*   Updated: 2023/12/04 15:53:41 by thuyvo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	char_count(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_cat(char *ptr, char *str)
{
	int	i;
	int	j;

	i = 0;
	while (ptr[i] != '\0')
		i++;
	j = 0;
	while (str[j] != '\0')
	{
		ptr[i] = str[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	str_len(int size, char **strs, char *sep)
{
	int	len;
	int	i;

	i = 0;
	len = 1;
	while (i < size)
	{
		len += char_count(strs[i]);
		i++;
	}
	if (size > 0)
		len += (char_count(sep) * (size - 1));
	else
		len = 1;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		len;
	int		i;

	i = 0;
	len = str_len(size, strs, sep);
	ptr = (char *)malloc(sizeof(char) * len);
	if (!ptr)
		return (0);
	ptr[0] = '\0';
	i = 0;
	while (i < size)
	{
		ptr = ft_cat(ptr, strs[i]);
		if (i < size - 1)
			ptr = ft_cat(ptr, sep);
		i++;
	}
	return (ptr);
}
/*
int main(void)
{
	char *strs[] = {"hello", "hi", "there"} ;
	char sep[] = ", ";
	printf("%s", ft_strjoin(3, strs, sep));
}*/
