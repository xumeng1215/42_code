/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:05:42 by yili              #+#    #+#             */
/*   Updated: 2023/11/29 17:07:41 by yili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_uppercase.c"

int	main(void)
{
	char t[20] = "FAaFG";
	int	result;
	result = ft_str_is_uppercase(t);
	printf("%d", result);
	return (0);
}
