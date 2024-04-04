/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthippal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:50:08 by pthippal          #+#    #+#             */
/*   Updated: 2023/12/05 11:50:11 by pthippal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

// #include <stdio.h>

// int main(void)
// {
// 	char c[] = "ABCDE";
// 	printf("Character of the String is : %d",ft_strlen(c));
// 	return 0;
// }