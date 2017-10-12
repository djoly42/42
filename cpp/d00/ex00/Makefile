# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: djoly <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/02 09:34:12 by djoly             #+#    #+#              #
#    Updated: 2017/10/03 10:02:18 by djoly            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=clang++
CFLAGS= -Wall -Wextra -Werror
NAME=megaphone

SRC=megaphone.cpp 

OBJ= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
		$(CC) -o $@ $^ 

%.o: %.cpp
		$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: clean fclean re

clean:
		@rm -rf $(OBJ)

fclean: clean
		@rm -rf $(NAME)

re: fclean all
