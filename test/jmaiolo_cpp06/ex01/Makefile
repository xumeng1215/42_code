# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmaiolo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/20 20:06:36 by jmaiolo           #+#    #+#              #
#    Updated: 2024/04/28 22:31:15 by jmaiolo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE = main.cpp Serializer.cpp

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = serializer

all:
	$(CC) $(FLAGS) $(SOURCE) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all