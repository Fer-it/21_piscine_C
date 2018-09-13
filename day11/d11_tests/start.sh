exPath="../ex00/ft_create_elem.c"
exName=ex00
echo "==== $exName start ===="
norminette -R CheckForbiddenSourceHeader $exPath
gcc -Wextra -Wall -Werror d11_t_"$exName".c $exPath
echo "Ожидаю => Hello"
./a.out "Hello"
echo "Ожидаю => Hi"
./a.out "Hi"
echo "==== $exName end ===="
echo " "

exPath="../ex01/ft_list_push_back.c"
exName=ex01
echo "==== $exName start ===="
norminette -R CheckForbiddenSourceHeader $exPath
gcc d11_t_"$exName".c $exPath
./a.out
echo "==== $exName end ===="
echo " "

exPath="../ex02/ft_list_push_front.c"
exName=ex02
echo "==== $exName start ===="
norminette -R CheckForbiddenSourceHeader $exPath
gcc d11_t_"$exName".c $exPath
./a.out
echo "==== $exName end ===="
echo " "

exPath="../ex03/ft_list_size.c"
exName=ex03
echo "==== $exName start ===="
norminette -R CheckForbiddenSourceHeader $exPath
gcc d11_t_"$exName".c $exPath
./a.out
echo "==== $exName end ===="
echo " "

exPath="../ex04/ft_list_last.c"
exName=ex04
echo "==== $exName start ===="
norminette -R CheckForbiddenSourceHeader $exPath
gcc d11_t_"$exName".c $exPath
./a.out
echo "==== $exName end ===="
echo " "

exPath="../ex05/ft_list_push_params.c"
exName=ex05
echo "==== $exName start ===="
norminette -R CheckForbiddenSourceHeader $exPath
gcc d11_t_"$exName".c $exPath
echo "-- Тест 1 --"
echo " "
./a.out
echo "-- Тест 2 --"
echo "Hello "
./a.out Hello
echo "-- Тест 3 --"
echo "Man Hello"
./a.out Hello Man
echo "-- Тест 4 --"
echo "5 4 3 2 1"
./a.out 1 2 3 4 5
echo "==== $exName end ===="
echo " "

exPath="../ex06/ft_list_clear.c"
exName=ex06
echo "==== $exName start ===="
norminette -R CheckForbiddenSourceHeader $exPath
gcc d11_t_"$exName".c $exPath
./a.out
echo "==== $exName end ===="
echo " "