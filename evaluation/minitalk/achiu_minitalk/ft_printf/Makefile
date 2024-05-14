# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: achiu <achiu@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/05 16:51:59 by achiu             #+#    #+#              #
#    Updated: 2024/05/08 16:46:35 by achiu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= ft_printf.c ft_nbr.c ft_char.c ft_hex.c

OBJ			= ${SRC:.c=.o}

CC			= cc

CFLAGS		= -Wall -Wextra -Werror

NAME		= ft_printf.a

all:		${NAME}

${NAME}:	${OBJ}
			ar rcs ${NAME} ${OBJ} 

clean:
			rm -f ${OBJ}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re