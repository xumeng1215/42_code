/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sastier- <sastier-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 18:11:37 by sastier-          #+#    #+#             */
/*   Updated: 2024/03/25 12:46:53 by sastier-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*read_line(int fd, char *str)
{
	int		i;
	char	*buff;

	i = -1;
	buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	while (find_line(str) < 0 && i != 0)
	{
		i = read(fd, buff, BUFFER_SIZE);
		buff[i] = '\0';
		str = ft_realloc(str, i);
		if (!str)
			return (NULL);
		ft_strcat(str, buff);
	}
	free(buff);
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*str[1024];
	char		*buff;

	buff = NULL;
	if (read(fd, 0, 0) == -1 || fd < 0 || BUFFER_SIZE <= 0)
	{
		free(str[fd]);
		str[fd] = NULL;
		return (NULL);
	}
	str[fd] = read_line(fd, str[fd]);
	buff = ft_strdup(str[fd]);
	str[fd] = ft_substr(str[fd]);
	if (!buff || !(str[fd]))
		return (NULL);
	if (*buff == '\0')
	{
		free(buff);
		free(str[fd]);
		str[fd] = NULL;
		return (NULL);
	}
	return (buff);
}

// int	main(void)
// {
// 	int		fd;
// 	int		fd2;
// 	char	*str;
// 	int		i;

// 	fd = -1;
// 	fd2 = -1;
// 	fd = open("empty.txt", O_RDONLY);
// 	fd2 = open("file.txt", O_RDONLY);
// 	if (fd < -1)
// 		printf("nulll");
// 	for (i = 0; i < 2; i++)
// 	{
// 		str = get_next_line(fd);
// 		printf("%s", str);
// 		str = get_next_line(fd2);
// 		printf("%s", str);
// 	}
// 	close(fd);
// 	close(fd2);
// 	return (0);
// }
