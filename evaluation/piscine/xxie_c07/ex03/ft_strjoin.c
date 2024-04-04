/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxie <xxie@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 16:06:20 by xxie              #+#    #+#             */
/*   Updated: 2023/12/03 14:26:52 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dst, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int	ft_final_len(char **strs, int size, int sep_len)
{
	int	final_len;
	int	i;

	final_len = 0;
	i = 0;
	while (i < size)
	{
		final_len += ft_strlen(strs[i]);
		final_len += sep_len;
		i++;
	}
	final_len -= sep_len;
	return (final_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		final_len;
	char	*res;
	char	*dup;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	final_len = ft_final_len(strs, size, ft_strlen(sep));
	dup = ((res = (char *)malloc((final_len + 1) * sizeof(char))));
	if (!dup)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(dup, strs[i]);
		dup += ft_strlen(strs[i]);
		if (i < (size -1))
		{
			ft_strcpy(dup, sep);
			dup += ft_strlen(sep);
		}
		i++;
	}
	*dup = '\0';
	return (res);
}

int main()
{
	char	*strs[] = {"a","bb","ccc"};
	char	*sep = "-";
	char	*res = ft_strjoin(3, strs, sep);

	if (res)
	{
		printf("%s|\n",res);
		free(res);
	}
	else
	{
		printf("memory allocation failed\n");
	}
}

