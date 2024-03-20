CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCDIR = srcs
INCDIR = includes

SRCS = $(SRCDIR)/ft_putchar.c \
       $(SRCDIR)/ft_swap.c \
       $(SRCDIR)/ft_putstr.c \
       $(SRCDIR)/ft_strlen.c \
       $(SRCDIR)/ft_strcmp.c

OBJS = $(SRCS:.c=.o)

LIB = ./libft.a

HEADERS = $(INCDIR)/ft.h

all: $(LIB)

$(LIB): $(OBJS)
	ar rcs $(LIB) $(OBJS)
	
%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c -o $@ $< -I $(INCDIR)

clean:
	rm -f $(OBJS)
	
fclean: clean
	rm -f $(LIB)

re: fclean all

