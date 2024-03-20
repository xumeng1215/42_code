/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthompso <pthompso@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:43:35 by pthompso          #+#    #+#             */
/*   Updated: 2024/03/11 19:50:48 by pthompso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "./libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*res_head;

	if (!lst || !f || !del)
		return (NULL);
	res = ft_lstnew(f(lst->content));
	if (!res)
		return (NULL);
	res_head = res;
	lst = lst->next;
	while (lst)
	{
		res->next = ft_lstnew(f(lst->content));
		if (!res->next)
		{
			ft_lstclear(&res_head, del);
			return (NULL);
		}
		res = res->next;
		lst = lst->next;
	}
	return (res_head);
}
