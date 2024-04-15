/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: charlie|| <charlie_xumeng@hotmail.co>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:45:08 by charlie||         #+#    #+#             */
/*   Updated: 2024/04/15 11:45:45 by charlie||        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

char	*ft_alloc_extra(char *str, int nb);
char	*ft_copy_str(char *str);
char	*ft_trim(char *str);
char	*ft_strcat(char *dest, char *src);
int		ft_find_line(char *str);
char	*ft_read_line(int fd, char *str);
char	*get_next_line(int fd);

#endif
