/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 13:14:16 by mexu              #+#    #+#             */
/*   Updated: 2023/12/04 13:58:06 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_result_len(int count, char **strs, char *sep)
{
	int	result;
	int	i;

	result = 0;
	i = 0;
	while (i < count)
	{
		result = result + ft_strlen(strs[i]);
		result = result + ft_strlen(sep);
		i++;
	}
	result = result - ft_strlen(sep);
	return (result);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		result_len;
	int		i;
	char	*temp;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	result_len = ft_result_len(size, strs, sep);
	result = (char *)malloc(result_len * sizeof(char));
	temp = result;
	i = 0;
	while (i < size)
	{
		temp = ft_strcat(temp, strs[i]);
		if (i < (size - 1))
			temp = ft_strcat(temp, sep);
		i++;
	}
	return (result);
}

/*
int	main(void)
{
	char *strs[] = {"abc", "123", "456","haha"};
	char *sep = "---";
	char *result = ft_strjoin(4, strs, sep);
	
	printf("%s\n", result);
	return (0);
}
*/
