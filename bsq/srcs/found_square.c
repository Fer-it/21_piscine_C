/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   found_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsprigga <bsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 20:37:54 by bsprigga          #+#    #+#             */
/*   Updated: 2018/09/12 21:21:26 by bsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "support.h"

int		current_square_calc(int i, int j, t_option *option)
{
	int step;
	int add;

	step = 0;
	while (1)
	{
		add = 0;
		while (add <= step)
		{
			if (option->map[i + add][j + step] == 'o')
				return (step);
			add++;
		}
		add = 0;
		while (add < step)
		{
			if (option->map[i + step][j + add] == 'o')
				return (step);
			add++;
		}
		step++;
	}
	return (-1);
}

int		**found_square(t_option *option)
{
	int **resolve;
	int i;
	int j;

	i = 0;
	resolve = (int **)malloc(sizeof(int *) * option->max_y);
	while (i < option->max_y)
	{
		resolve[i] = (int *)malloc(sizeof(int) * option->max_x);
		i++;
	}
	i = 0;
	while (i < option->max_y)
	{
		j = 0;
		while (j < option->max_x)
		{
			resolve[i][j] = current_square_calc(i, j, option);
			j++;
		}
		i++;
	}
	i = 0;
	return (resolve);
}
