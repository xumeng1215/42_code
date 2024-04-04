# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jschilli <jschilli@student.42.au>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/15 14:37:07 by jschilli          #+#    #+#              #
#    Updated: 2024/03/20 13:36:11 by jschilli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SOURCES			= ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_tolower.c \
	  			ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcpy.c \
				ft_memcmp.c ft_memset.c ft_strchr.c ft_strlcat.c ft_toupper.c \
				ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_calloc.c ft_strrchr.c \
				ft_memmove.c ft_strdup.c ft_strjoin.c ft_putchar_fd.c ft_strnstr.c\
				ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c \
				ft_strtrim.c ft_substr.c ft_split.c ft_itoa.c ft_striteri.c

OBJ			= $(SOURCES:.c=.o)

NAME		= libft.a

AR			= ar rcs

CC			= cc

RM			= rm -f

CFLAGS 			= -Wall -Wextra -Werror

$(NAME):		$(OBJ)
				$(AR) $(NAME) $(OBJ)

all:			$(NAME)

clean:
				$(RM) $(OBJ)

fclean:			clean
				$(RM) $(NAME)

re:		clean all

.PHONY: all clean fclean re
