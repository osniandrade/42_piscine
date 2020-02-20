# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdanelon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/07 10:10:14 by jdanelon          #+#    #+#              #
#    Updated: 2019/12/08 21:44:18 by jdanelon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

SRC = main.c ft_validate.c ft_comp.c ft_funcs.c ft_prints.c ft_rush.c

all: $(NAME)

$(NAME):
	cc -Wall -Wextra -Werror -o $(NAME) $(SRC)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re : fclean all
