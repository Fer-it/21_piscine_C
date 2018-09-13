
ex00="../ex00/ft_strdup.c"
norminette -R CheckForbiddenSourceHeader $ex00
gcc -Wextra -Wall -Werror t_d7_ex00.c $ex00
./a.out

ex01="../ex01/ft_range.c"
norminette -R CheckForbiddenSourceHeader $ex01
gcc -Wextra -Wall -Werror t_d7_ex01.c $ex01
./a.out

ex02="../ex02/ft_ultimate_range.c"
norminette -R CheckForbiddenSourceHeader $ex02
gcc -Wextra -Wall -Werror t_d7_ex02.c $ex02
./a.out

ex03="../ex03/ft_concat_params.c"
norminette -R CheckForbiddenSourceHeader $ex03
gcc -Wextra -Wall -Werror t_d7_ex03.c $ex03
./a.out

ex04="../ex04/ft_split_whitespaces.c"
norminette -R CheckForbiddenSourceHeader $ex04
gcc t_d7_ex04.c $ex04
./a.out