/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:47:49 by yili              #+#    #+#             */
/*   Updated: 2023/11/29 19:48:40 by yili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_str_is_numeric.c"
#include <stdio.h>

int	main(void)
{
	char	t[20] = "34i435";
	int	result;

	result = ft_str_is_numeric(t);
	printf("%d", result);
	return (0);
}
