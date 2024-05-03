SRC			= ft_printf.c ft_printf_utils.c

DIR			= ./obj/

OBJS		= ${addprefix ${DIR}, ${SRC:c=o}}

NAME		= libftprintf.a

AR			= ar rc

LIB			= ranlib

GCC			= cc

CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}

${DIR}%.o: %.c
			@mkdir -p obj
			@${GCC} ${CFLAGS} -c $< -o $@

${NAME}:	libft ${OBJS}
			@${AR} ${NAME} ${OBJS}
			@${LIB} ${NAME}

libft:
			@make -C libft_first
			@cp libft_first/libft.a libftprintf.a

clean:
			rm -f ${OBJS}
			make -C libft_first clean

fclean:		clean
			rm -f ${NAME}
			make -C libft_first fclean

re:			fclean all

.PHONY:		all clean fclean re libft
