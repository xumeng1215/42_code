/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschilli <jschilli@student.42.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:00:24 by jschilli          #+#    #+#             */
/*   Updated: 2024/03/18 14:00:28 by jschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*string;
	size_t	i;

	i = 0;
	string = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!(string))
		return (NULL);
	while (*s)
		string[i++] = *s++;
	string[i] = '\0';
	return (string);
}
/*
int	main()
{
	char	str[] = "fghfdsgg";
	char	*dupstr = ft_strdup(str);

	if (dupstr)
	{
		printf("%s\n", ft_strdup(str));
		free(dupstr);
	}
	else
		printf("Memory allocation failed!\n");
	return (0);
}*/
