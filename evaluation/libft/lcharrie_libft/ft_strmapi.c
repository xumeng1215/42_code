/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharrie <lcharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:53:15 by lessisters        #+#    #+#             */
/*   Updated: 2024/03/17 17:24:32 by lcharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rep;
	int		count;

	rep = NULL;
	count = 0;
	rep = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (rep == NULL)
		return (NULL);
	while (s[count])
	{
		rep[count] = f(count, s[count]);
		count++;
	}
	rep[count] = '\0';
	return (rep);
}

//char addOne(unsigned int i, char c) {return (i + c);}
//int	main(void)
//{
//	char * s = ft_strmapi("1234", addOne);
//
//	printf("s= %s\n", s);
//}