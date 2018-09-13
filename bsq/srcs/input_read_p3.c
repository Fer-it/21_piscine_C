/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_read_p3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsprigga <bsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 20:38:31 by bsprigga          #+#    #+#             */
/*   Updated: 2018/09/12 20:38:32 by bsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "support.h"

void	fill_t_option(t_str *str_struct, t_option *option, int i)
{
	option->max_y = ft_atoi(str_struct->str);
	option->empty = str_struct->str[i];
	option->obstacle = str_struct->str[i + 1];
	option->full = str_struct->str[i + 2];
	option->map = (char **)malloc(sizeof(char *) * (option->max_y + 1));
	option->rows_length = (int *)malloc(sizeof(int) * option->max_y);
}

void	trash_read(int fd)
{
	char	buf[1];

	if (fd == 0)
	{
		while (buf[0] != '\n')
			read(fd, buf, 1);
	}
}

int		check_first_row(int fd, t_option *option)
{
	int		i;
	char	buf[1];
	t_str	*str_struct;

	str_struct = str_initial(14);
	while (read(fd, buf, 1))
	{
		add_char(str_struct, buf[0]);
		if (str_struct->length == 2 && (buf[0] > '9' || buf[0] < '0'))
		{
			trash_read(fd);
			return (-2);
		}
		if (buf[0] == '\n')
			break ;
	}
	i = 0;
	while (str_struct->str[i] <= '9' && str_struct->str[i] >= '0')
		i++;
	if (str_struct->length != i + 5 || str_struct->str[i + 3] != '\n')
		return (-4);
	fill_t_option(str_struct, option, i);
	return (0);
}
