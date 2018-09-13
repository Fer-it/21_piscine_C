# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdremora <sdremora@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 14:51:08 by sdremora          #+#    #+#              #
#    Updated: 2018/09/12 20:09:06 by bsprigga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRCS = srcs/found_square.c srcs/main.c srcs/input_read_p1.c \
srcs/input_read_p2.c srcs/input_read_p3.c srcs/print_table.c \
srcs/resolve_found.c srcs/support1.c srcs/str_array srcs/support2.c
OUT = found_square.o main.o input_read_p1.o input_read_p2.o \
input_read_p3.o print_table.o resolve_found.o support1.o str_array.o
FLAGS = -Wextra -Wall -Werror
INCLUDES = includes/

all: $(NAME)

$(NAME): $(OUT)
	gcc $(OUT) $(FLAGS) -o $(NAME)

found_square.o: srcs/found_square.c
	gcc $(FLAGS) -c srcs/found_square.c -o found_square.o -I$(INCLUDES)

main.o: srcs/main.c
	gcc $(FLAGS) -c srcs/main.c -o main.o -I$(INCLUDES)

input_read_p1.o: srcs/input_read_p1.c
	gcc $(FLAGS) -c srcs/input_read_p1.c -o input_read_p1.o -I$(INCLUDES)

input_read_p2.o: srcs/input_read_p2.c
	gcc $(FLAGS) -c srcs/input_read_p2.c -o input_read_p2.o -I$(INCLUDES)

input_read_p3.o: srcs/input_read_p3.c
	gcc $(FLAGS) -c srcs/input_read_p3.c -o input_read_p3.o -I$(INCLUDES)

str_array.o: srcs/str_array.c
	gcc $(FLAGS) -c srcs/str_array.c -o str_array.o -I$(INCLUDES)

print_table.o: srcs/print_table.c
	gcc $(FLAGS) -c srcs/print_table.c -o print_table.o -I$(INCLUDES)

resolve_found.o: srcs/resolve_found.c
	gcc $(FLAGS) -c srcs/resolve_found.c -o resolve_found.o -I$(INCLUDES)

support1.o: srcs/support1.c
	gcc $(FLAGS) -c srcs/support1.c -o support1.o -I$(INCLUDES)

clean:
	/bin/rm -rf $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
