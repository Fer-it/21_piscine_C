# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/03 09:58:57 by sdremora          #+#    #+#              #
#    Updated: 2018/09/04 14:02:13 by sdremora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OUT = srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_strcmp.o srcs/ft_strlen.o srcs/ft_swap.o

INCLUDES = includes/

all: $(NAME)

$(NAME): $(OUT)
	ar rc $(NAME) $(OUT)
	ranlib libft.a

ft_putchar.o: srcs/ft_putchar.c
	gcc -Wall -Wextra -Werror -c srcs/ft_putchar.c -I$(INCLUDES)

ft_putstr.o: srcs/ft_putstr.c
	gcc -Wall -Wextra -Werror -c srcs/ft_putstr.c -I$(INCLUDES)

ft_strcmp.o: srcs/ft_strcmp.c
	gcc -Wall -Wextra -Werror -c srcs/ft_strcmp.c -I$(INCLUDES)

ft_strlen.o: srcs/ft_strlen.c
	gcc -Wall -Wextra -Werror -c srcs/ft_strlen.c -I$(INCLUDES)

ft_swap.o: srcs/ft_swap.c
	gcc -Wall -Wextra -Werror -c srcs/ft_swap.c -I$(INCLUDES)

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all