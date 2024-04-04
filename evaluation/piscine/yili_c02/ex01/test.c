/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:52:58 by yili              #+#    #+#             */
/*   Updated: 2023/11/29 19:55:21 by yili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_strncpy.c"

int	main(void)
{
	char src[20] = "nimabi";
	char dest[20];

	ft_strncpy(dest, src, 3);
	printf("%s", dest);
	return (0);
}	
