/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:40:58 by mexu              #+#    #+#             */
/*   Updated: 2023/12/07 13:10:41 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	error_msg(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (2, &str[i], 1);
		i++;
	}
	return ;
}

void	display_file(char *file_name)
{
	int		file_descriptor;
	char	*msg_read_error;
	char	buffer[4096];
	long	bytes_read;

	msg_read_error = "Cannot read file.\n";
	file_descriptor = open(file_name, O_RDONLY);
	if (file_descriptor == -1)
	{
		error_msg(msg_read_error);
		return ;
	}
	bytes_read = read(file_descriptor, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		write (1, buffer, bytes_read);
		close (file_descriptor);
		return ;
	}
}

int	main(int argc, char *args[])
{
	char	*msg_no_arg;
	char	*msg_too_many_arg;

	msg_no_arg = "File name missing.\n";
	msg_too_many_arg = "Too many arguments.\n";
	if (argc == 1)
	{
		error_msg(msg_no_arg);
		return (0);
	}
	if (argc > 2)
	{
		error_msg(msg_too_many_arg);
		return (0);
	}
	display_file(args[1]);
	return (0);
}
