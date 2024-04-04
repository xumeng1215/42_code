/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:56:15 by yili              #+#    #+#             */
/*   Updated: 2023/11/29 16:58:43 by yili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_lowercase.c"

int	main(void)
{
	char t[20] = "";
	int	result;

	result = ft_str_is_lowercase(t);
	printf("%d", result);
	return (0);
}
