/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcharrie <lcharrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:38:42 by lessisters        #+#    #+#             */
/*   Updated: 2024/03/15 11:00:02 by lcharrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_find_size_lst(int n)
{
	int	big_divi;
	int	rep;

	big_divi = 1;
	rep = 0;
	if (n == -2147483648 || n == -2147483648LL || n == -2147483648L)
		return (10);
	if (n < 0)
		n = -n;
	while (n / big_divi > 9)
	{
		big_divi *= 10;
		rep++;
	}
	rep++;
	return (rep);
}

void	ft_give_val(int *big_divi, int *count)
{
	*big_divi = 1;
	*count = 0;
}

char	*ft_strcpy(char *lst)
{
	char	*new;
	int		count;

	count = 0;
	new = malloc(sizeof(char) * (ft_strlen(lst) + 1));
	while (lst[count])
	{
		new[count] = lst[count];
		count++;
	}
	new[count] = '\0';
	return (new);
}

void	ft_loop(int *n, int *big_divi, int *count, char *lst)
{
	while (*n / *big_divi > 9)
		*big_divi *= 10;
	while (*big_divi > 0)
	{
		lst[(*count)++] = *n / *big_divi + '0';
		*n = *n % *big_divi;
		*big_divi /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		big_divi;
	int		count;
	char	*lst;

	ft_give_val(&big_divi, &count);
	if (n == -2147483648 || n == -2147483648LL || n == -2147483648L)
	{
		lst = ft_strcpy("-2147483648");
		return (lst);
	}
	lst = malloc(sizeof(char) * (ft_find_size_lst(n) + 2));
	if (lst == NULL)
		return (NULL);
	if (n < 0)
	{
		n = -n;
		lst[count++] = '-';
	}
	ft_loop(&n, &big_divi, &count, lst);
	lst[count] = '\0';
	return (lst);
}

// int	main(void)
// {
// 	char	*rep;

// 	rep = ft_itoa(-2147483648);
// 	printf("rep = %s\n", rep);
// 	free(rep);
// 	return (0);
// }
