SRC			= ft_printf.c ft_printf_utils.c

OBJS		= ${SRC:c=o}

HFILE		= ft_printf_head.h

NAME		= libftprintf.a

AR			= ar rc

LIB			= ranlib

GCC			= gcc

CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}

%.o: %.c
			${GCC} ${CFLAGS} -c -I ${HFILE} $< -o $@

${NAME}:	libft ${OBJS}
			${AR} ${NAME} ${OBJS}
			${LIB} ${NAME}

libft:
			make -C libft
			cp libft/libft.a libftprintf.a

clean:
			rm -f ${OBJS} ${BOBJS}
			make -C libft fclean

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re libft
