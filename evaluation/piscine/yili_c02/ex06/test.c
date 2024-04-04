/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:12:31 by yili              #+#    #+#             */
/*   Updated: 2023/11/29 17:14:54 by yili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_str_is_printable.c"

int	main(void)
{
	char t[20] ="asdf345GG";
	int	result;
	result = ft_str_is_printable(t);
	printf("%d", result);
	return (0);
}
