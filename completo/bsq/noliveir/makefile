# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ocarlos- <ocarlos-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/11 08:22:28 by ocarlos-          #+#    #+#              #
#    Updated: 2019/12/11 15:05:30 by ocarlos-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = BSQ

SRC = main.c ft_atoi.c

ARGS = map1

all: $(NAME)

$(NAME):
	cc -Wall -Wextra -Werror -o $(NAME) $(SRC)

run: all
	./$(NAME) "$(ARGS)"

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

teste: fclean run