CFLAGS += -Wall -Wextra -Werror -Iincludes
#CFLAGS += -Iincludes

SRCS = srcs/do_op.c \
		srcs/ops.c \
		srcs/ft.c \
		srcs/ft_atoi.c

OBJS = $(SRCS:.c=.o)

NAME = do-op

all: $(NAME)

$(NAME): $(OBJS)
	cc -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
