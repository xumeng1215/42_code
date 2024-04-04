/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achiu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 15:33:40 by achiu             #+#    #+#             */
/*   Updated: 2023/12/09 15:33:49 by achiu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	i = 0;
	k = 0;
	split = malloc(sizeof(char *) * 256);
	while (is_sep(str[i], charset))
		i++;
	while (str[i])
	{
		j = 0;
		split[k] = malloc(sizeof(char) * 4096);
		while (!is_sep(str[i], charset) && str[i])
			split[k][j++] = str[i++];
		while (is_sep(str[i], charset))
			i++;
		split[k][j] = '\0';
		k++;
	}
	split[k] = NULL;
	return (split);
}

/*int	main(void)
{
    char	*str = "This is a string";
    char	**result = ft_split(str, " ");
	int		i;

	if (result == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
