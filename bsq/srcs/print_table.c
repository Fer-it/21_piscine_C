/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_table.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsprigga <bsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 20:38:53 by bsprigga          #+#    #+#             */
/*   Updated: 2018/09/12 22:29:24 by bsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "support.h"

char	select_char(t_option *option, int y, int x)
{
	char c;
	char point;

	point = option->map[y][x];
	if (point == '.')
		c = option->empty;
	if (point == 'o')
		c = option->obstacle;
	if (point == 'x')
		c = option->full;
	return (c);
}

void	change_map(t_option *option, t_point answer)
{
	int x;
	int y;

	y = 0;
	while (y < answer.a)
	{
		x = 0;
		while (x < answer.a)
		{
			option->map[answer.y + y][answer.x + x] = 'x';
			x++;
		}
		y++;
	}
}

void	replace_char_in_map(t_option *option)
{
	int y;
	int x;

	y = 0;
	while (y < option->max_y)
	{
		x = 0;
		while (x < option->max_x)
		{
			option->map[y][x] = select_char(option, y, x);
			x++;
		}
		y++;
	}
}

void	print_table(t_option *option, t_point answer)
{
	int y;

	y = 0;
	change_map(option, answer);
	replace_char_in_map(option);
	while (y < option->max_y)
	{
		write(1, option->map[y], option->max_x);
		ft_putchar('\n');
		y++;
	}
}
