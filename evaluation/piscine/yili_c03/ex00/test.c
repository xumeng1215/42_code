/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yili <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 18:08:50 by yili              #+#    #+#             */
/*   Updated: 2023/11/29 18:09:46 by yili             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// C Program to Demonstrate the use of strcmp() function
#include <stdio.h>
#include <string.h>
#include "ft_strcmp.c"

int main()
{
	// declaring two same string
	char* first_str = "Geeks";
	char* second_str = "";

	// printing the strings
	printf("First String: %s\n", first_str);
	printf("Second String: %s\n", second_str);

	// printing the return value of the strcmp()
	printf("Return value of strcmp(): %d",
		ft_strcmp(first_str, second_str));

	return 0;
}
