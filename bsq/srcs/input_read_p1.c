/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_read_p1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsprigga <bsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 20:38:05 by bsprigga          #+#    #+#             */
/*   Updated: 2018/09/12 20:38:06 by bsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "support.h"

int		file_open(int argc, char *file_name, int *fd)
{
	int error_code;

	error_code = 0;
	if (argc == 1)
		*fd = 0;
	else
		*fd = open(file_name, O_RDWR);
	if (*fd < 0)
		error_code = -1;
	return (error_code);
}

int		file_close(int error_code, int fd)
{
	if (fd)
	{
		if (close(fd) != -1)
			return (error_code);
		return (-7);
	}
	return (error_code);
}

void	add_empty_row(t_option *option)
{
	int		i;
	char	*empty_row;

	empty_row = (char *)malloc(sizeof(char) * option->max_x);
	i = 0;
	while (i < option->max_x)
	{
		empty_row[i] = 'o';
		i++;
	}
	option->map[option->max_y] = empty_row;
}

int		check_rows_length(t_option *option)
{
	int i;

	i = 1;
	option->max_x = option->rows_length[0];
	while (i < option->max_y)
	{
		if (option->rows_length[i] != option->max_x)
			return (-6);
		i++;
	}
	return (0);
}

int		input_read(int argc, char *file_name, t_option *option)
{
	int		i;
	int		fd;
	int		error_code;

	if ((error_code = file_open(argc, file_name, &fd)) == 0)
	{
		error_code = check_first_row(fd, option);
		if (error_code != 0)
			return (error_code);
		i = 0;
		while (i < option->max_y)
		{
			error_code = row_read(fd, option, i);
			if (error_code != 0)
				return (error_code);
			i++;
		}
		if (fd != 0 && read(fd, NULL, 1) != 0)
			return (-5);
		error_code = check_rows_length(option);
		error_code = file_close(error_code, fd);
		add_empty_row(option);
	}
	return (error_code);
}
