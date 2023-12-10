/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mexu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:13:54 by mexu              #+#    #+#             */
/*   Updated: 2023/12/10 11:13:56 by mexu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 4096

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
	return ;
}

void	display_realtime(void)
{
	char		buffer[BUFFER_SIZE];
	long		byte_read;
	int			std_file_descriptor;	

	std_file_descriptor = open("/dev/stdin", O_RDONLY);
	if (std_file_descriptor == -1)
		return ;
	byte_read = read(std_file_descriptor, buffer, sizeof(buffer));
	while (byte_read > 0)
	{
		write(STDOUT_FILENO, buffer, byte_read);
		byte_read = read(std_file_descriptor, buffer, sizeof(buffer));
	}
	close(std_file_descriptor);
	return ;
}

void	cat_file(char *file_name)
{
	int		file_descriptor;
	char	buffer[BUFFER_SIZE];
	long	byte_read;

	file_descriptor = open(file_name, O_RDONLY);
	printf("%s\n", file_name);
	printf("%d\n", file_descriptor);
	printf("%d\n", errno);
	if (file_descriptor == -1)
	{
		ft_putstr("cat: ");
		ft_putstr(file_name);
		ft_putstr(": ");
		ft_putstr(strerror(errno));
		ft_putstr("\n");
		return ;
	}
	byte_read = read(file_descriptor, buffer, sizeof(buffer));
	if (byte_read > 0)
	{
		write(STDOUT_FILENO, buffer, byte_read);
		//byte_read = read(std_file_descriptor, buffer, sizeof(buffer));
	}
	if (byte_read == -1)
	{
		close(file_descriptor);
		return ;
	}
	close(file_descriptor);
	return ;
}

int	main(int argc, char *args[])
{
	int	i;

	while (argc <= 1)
	{
		display_realtime();
		return (0);
	}

	//printf("%s\n", basename args[1]);
	i = 1;
	while (i < argc)
	{
		if (args[i][0] == '-' && args[i][1] == '\0')
			display_realtime();
		else
			cat_file(args[i]);
		i++;
	}
	return (0);
}
