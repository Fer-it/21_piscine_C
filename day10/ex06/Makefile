# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/03 09:58:57 by sdremora          #+#    #+#              #
#    Updated: 2018/09/04 14:17:06 by sdremora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

OUT = do_op.o operators.o support.o

INCLUDES = includes/

all: $(NAME)

$(NAME): $(OUT)
	gcc -Wall -Wextra -Werror $(OUT) -o $(NAME)

do_op.o: do_op.c
	gcc -Wall -Wextra -Werror -c do_op.c -I$(INCLUDES)

operators.o: operators.c
	gcc -Wall -Wextra -Werror -c operators.c -I$(INCLUDES)

support.o: support.c
	gcc -Wall -Wextra -Werror -c support.c -I$(INCLUDES)

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all