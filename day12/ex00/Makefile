# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/06 14:14:31 by sdremora          #+#    #+#              #
#    Updated: 2018/09/06 22:58:53 by sdremora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

OUT = srcs/ft_display_file.o srcs/support.o
FLAGS = -Wextra -Wall -Werror

$(NAME): $(OUT)
	gcc $(FLAGS) $(OUT) -o $(NAME)

ft_display_file.o: ft_display_file.c
	gcc $(FLAGS) -c ft_display_file.c

support.o: support.c
	gcc $(FLAGS) -c support.c

all: $(NAME)

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re:	fclean all
