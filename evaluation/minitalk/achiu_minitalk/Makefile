SRC				= client.c server.c

OBJ				= $(SRC:.c=.o)

CFLAGS			= -Wall -Wextra -Werror

NAME			= Minitalk.a

FT_PRINTF_M		= make -C ft_printf/

FT_PRINTF		= ft_printf/ft_printf.a

LIBFT			= libft/libft.a

LIBFT_MAKE		= make -C libft/

all: 			$(NAME)

$(NAME):		$(OBJ) $(FT_PRINTF) $(LIBFT)
				ar rcs $(NAME) $(OBJ) $(FT_PRINTF) $(LIBFT)
				cc $(CFLAGS) server.c $(FT_PRINTF) -o server
				cc $(CFLAGS) client.c $(LIBFT) -o client

$(FT_PRINTF):
				$(FT_PRINTF_M)

$(LIBFT):
				$(LIBFT_MAKE)

clean: 		
				rm -rf $(OBJ)
				$(FT_PRINTF_M) clean
				$(LIBFT_MAKE) clean

fclean: 		clean
				rm -rf $(NAME)
				rm -rf server client
				$(FT_PRINTF_M) fclean
				$(LIBFT_MAKE) fclean

re: 			fclean all

.phony:			re all clean fclean 