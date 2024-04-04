/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharrie <lcharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 15:14:22 by lcharrie          #+#    #+#             */
/*   Updated: 2024/03/09 15:34:40 by lcharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*lst;

	lst = malloc(count * size);
	if (lst == NULL)
		return (NULL);
	ft_memset(lst, 0, size * count);
	return (lst);
}

// int	main(void)
// {
// 	char	*list;
// 	char	*list2;

// 	list = NULL;
// 	list2 = NULL;
// 	list = calloc(10, sizeof(int));
// 	list2 = ft_calloc(10, sizeof(int));
// 	if (list == NULL)
// 		printf("Error! memory not allocated.");
// 	else if (list2 == NULL)
// 		printf("Error! memory not allocated.");
// 	else
// 		printf("Successful allocation !\n");
// 	return (0);
// }
