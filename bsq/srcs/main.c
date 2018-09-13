/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsprigga <bsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 20:38:40 by bsprigga          #+#    #+#             */
/*   Updated: 2018/09/12 20:38:41 by bsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "support.h"

int		print_error_message(int error_code, int argc, int i)
{
	int is_printed;

	if (error_code != 0)
		is_printed = 1;
	else
		is_printed = 0;
	if (error_code == -1)
		write(2, "File can't be opened\n", 21);
	else if (error_code == -2)
		write(2, "map error\n", 10);
	else if (error_code == -3)
		write(2, "File close error\n", 17);
	else if (error_code == -4)
		write(2, "map error\n", 10);
	else if (error_code == -5)
		write(2, "map error\n", 10);
	else if (error_code == -6)
		write(2, "map error\n", 10);
	else if (error_code == -7)
		write(2, "map error\n", 10);
	else if (error_code == -8)
		write(2, "Resize error in add_char function\n", 34);
	if (argc > 2 && i != argc && error_code != 0)
		write(1, "\n", 1);
	return (is_printed);
}

int		main(int argc, char **argv)
{
	int			**resolve;
	t_point		*answer;
	t_option	*option;
	int			error_code;
	int			i;

	option = (t_option *)malloc(sizeof(t_option));
	i = (argc == 1) ? 0 : 1;
	while (i < argc)
	{
		error_code = 0;
		if (argc == 1)
			error_code = input_read(1, "console read", option);
		else
			error_code = input_read(argc, argv[i], option);
		i++;
		if (print_error_message(error_code, argc, i) != 0)
			continue ;
		resolve = found_square(option);
		answer = resolve_found(resolve, option);
		print_table(option, *answer);
		if (argc > 2 && i != argc)
			write(1, "\n", 1);
	}
	return (0);
}
