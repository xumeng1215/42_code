CC = cc

FLAGS = -Wall -Wextra -Werror

SRC =   ft_split.c ft_putendl_fd.c ft_itoa.c ft_putnbr_fd.c ft_putstr_fd.c ft_putchar_fd.c ft_striteri.c ft_strmapi.c\
		ft_strtrim.c ft_strjoin.c ft_substr.c ft_memcpy.c ft_strnstr.c ft_strlcat.c \
		ft_strlcpy.c ft_strdup.c ft_calloc.c ft_memmove.c \
		ft_memcmp.c ft_memchr.c ft_atoi.c ft_strncmp.c ft_strlen.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_memset.c ft_bzero.c ft_toupper.c ft_tolower.c \
		ft_isalpha.c ft_isdigit.c ft_strchr.c ft_strrchr.c

OBJ = $(SRC:.c=.o)
# Cette ligne génère la liste des 
# fichiers objet à partir des fichiers source en remplaçant l'extension .c par l'extension .o.

NAME = libft.a

HEADER_FILE	= libft.h

$(NAME): $(OBJ)
	ar rc ${NAME} ${OBJ}
# règle de construction qui spécifie que le fichier libft.a dépend des fichiers objets spécifiés.

all: $(NAME)

%.o: %.c  
	$(CC) $(FLAGS) -c $< -o $@ -I ${HEADER_FILE} 
#  %.o: %.c , règle de construction spécifie comment créer les fichiers objet à partir des fichiers source
# $< représente le fichier source, $@ représente le fichier objet à générer.

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

# CC = cc

# FLAGS = -Wall -Wextra -Werror

# SRC =  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
# 		ft_memcpy.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_atoi.c

# OBJ = $(SRC:.c=.o)

# NAME = libft.a

# HEADER_FILE	= libft.h

# all: $(NAME)

# $(NAME): $(OBJ)
# 		ar rc ${NAME} ${OBJ}

# .c.o:
# 	$(CC) $(FLAGS) -c -I ${HEADER_FILE} $< -o ${<:.c=.o}

# clean:
# 	rm -f $(OBJ)

# fclean: clean
# 	rm -f $(NAME)

# re: fclean all

# .PHONY: all clean fclean re
