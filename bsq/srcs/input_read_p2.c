/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_read_p2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsprigga <bsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 20:38:20 by bsprigga          #+#    #+#             */
/*   Updated: 2018/09/12 20:38:21 by bsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "support.h"

int		is_valid_char(char c, t_option *option)
{
	return (c == option->empty || c == option->obstacle || c == option->full);
}

char	replace_char_to_dot_o_x(t_option *option, char point)
{
	char c;

	if (point == option->empty)
		c = '.';
	if (point == option->obstacle)
		c = 'o';
	if (point == option->full)
		c = 'x';
	return (c);
}

void	row_read_end(t_option *option, t_str *row, int i)
{
	option->map[i] = row->str;
	option->rows_length[i] = row->length - 3;
}

int		row_read(int fd, t_option *option, int i)
{
	char	buf[1];
	int		read_byte;
	t_str	*row;

	row = str_initial(10);
	while ((read_byte = read(fd, buf, 1)) > 0)
	{
		if (buf[0] == '\n')
		{
			add_char(row, 'o');
			add_char(row, '\n');
			break ;
		}
		if (is_valid_char(buf[0], option))
		{
			if (add_char(row, replace_char_to_dot_o_x(option, buf[0])) == -8)
				return (-8);
		}
		else
			return (-5);
	}
	row_read_end(option, row, i);
	free(row);
	return (0);
}
