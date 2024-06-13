# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmaiolo <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/20 20:06:36 by jmaiolo           #+#    #+#              #
#    Updated: 2024/04/29 00:40:20 by jmaiolo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE = main.cpp Base.cpp

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
NAME = base

all:
	$(CC) $(FLAGS) $(SOURCE) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all