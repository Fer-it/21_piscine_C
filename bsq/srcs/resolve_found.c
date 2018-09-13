/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve_found.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsprigga <bsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 20:39:02 by bsprigga          #+#    #+#             */
/*   Updated: 2018/09/12 20:39:02 by bsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "support.h"

t_point		*initial(void)
{
	t_point *answer;

	answer = (t_point *)malloc(sizeof(t_point));
	if (answer)
	{
		answer->x = 0;
		answer->y = 0;
		answer->a = 0;
	}
	return (answer);
}

t_point		*resolve_found(int **resolve, t_option *option)
{
	int		x;
	int		y;
	t_point	*answer;

	answer = initial();
	if (!answer)
		return (NULL);
	y = 0;
	while (y < option->max_y)
	{
		x = 0;
		while (x < option->max_x)
		{
			if (resolve[y][x] > answer->a)
			{
				answer->x = x;
				answer->y = y;
				answer->a = resolve[y][x];
			}
			x++;
		}
		y++;
	}
	return (answer);
}
