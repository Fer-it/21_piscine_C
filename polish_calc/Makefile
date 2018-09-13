# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/09 15:36:17 by sdremora          #+#    #+#              #
#    Updated: 2018/09/09 19:40:29 by sdremora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
SRCS = srcs/conventer.c srcs/main.c srcs/support.c srcs/eval_expr.c \
srcs/operators.c srcs/stack.o srcs/support2.c
OUT = conventer.o main.o support.o eval_expr.o operators.o stack.o \
support2.o
FLAGS = -Wextra -Wall -Werror
INCLUDES = includes/

all: $(NAME)

$(NAME): $(OUT)
	gcc $(OUT) -o $(NAME)

main.o: srcs/main.c
	gcc -c srcs/main.c -I$(INCLUDES)

support.o: srcs/support.c
	gcc -c srcs/support.c -I$(INCLUDES)

support2.o: srcs/support2.c
	gcc -c srcs/support2.c -I$(INCLUDES)

conventer.o: srcs/conventer.c
	gcc -c srcs/conventer.c -I$(INCLUDES)

eval_expr.o: srcs/eval_expr.c
	gcc -c srcs/eval_expr.c -I$(INCLUDES)

operators.o: srcs/operators.c
	gcc -c srcs/operators.c -I$(INCLUDES)

stack.o: srcs/stack.c
	gcc -c srcs/stack.c -I$(INCLUDES)

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
