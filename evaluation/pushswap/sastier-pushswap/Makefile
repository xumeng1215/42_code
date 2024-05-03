SRC			= push_swap.c \
				node_clear.c \
				node_create.c \
				node_op.c node_op_2.c node_op_3.c \
				utils.c \
				swap_push_op.c rotate_op.c rev_rotate_op.c \
				small_sort.c big_sort.c find_B_array.c \
				get_next_line.c get_next_line_utils.c \
				checkers_bonus.c checkers_main_bonus.c

DIR			= ./obj/

OBJS		= ${addprefix ${DIR}, ${SRC:c=o}}

NAME		= push_swap.a

AR			= ar rc

LIB			= ranlib

GCC			= cc

CFLAGS		= -Wall -Wextra -Werror

all:		${NAME}
			${GCC} ${CFLAGS} push_swap.c ${NAME} -o push_swap

${DIR}%.o: %.c
			@mkdir -p obj
			@${GCC} ${CFLAGS} -c $< -o $@

${NAME}:	libft ${OBJS}
			@${AR} ${NAME} ${OBJS}
			@${LIB} ${NAME}

libft:
			@make -C libft
			@cp libft/libftprintf.a push_swap.a

clean:
			rm -f ${OBJS}
			make -C libft clean

fclean:		clean
			rm -f ${NAME}
			rm -f ./push_swap ./checker
			make -C libft fclean

bonus:		all
			${GCC} ${CFLAGS} checkers_main_bonus.c ${NAME} -o checker

re:			fclean all

.PHONY:		all clean fclean re libft bonus
