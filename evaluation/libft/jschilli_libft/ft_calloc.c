/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jschilli <jschilli@student.42.au>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 13:30:03 by jschilli          #+#    #+#             */
/*   Updated: 2024/03/19 14:07:38 by jschilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_memset((unsigned char *)ptr, 0, nmemb * size);
	return (ptr);
}
/*
int	main()
{
	int	*arr;
	int	ne = 5;
	int	ns = sizeof(int);

	arr = (int *)ft_calloc(ne, ns);

	if (arr != NULL)
	{
		printf("Memory allocated successfully!\n");
		for (int i = 0; i < ne; i++)
			printf("%d\n", arr[i]);
		printf("\n");
		free(arr);
	}
	else
		printf("Memory allocation failed!\n");
	return (0);
}
*/
