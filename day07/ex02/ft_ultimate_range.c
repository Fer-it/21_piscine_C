/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 15:08:30 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/31 10:35:14 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		*range = 0;
		return (0);
	}
	i = 0;
	array = (int *)malloc(sizeof(*array) * (max - min));
	if (min == max)
	{
		array[i] = min;
		i = 1;
	}
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	*range = array;
	return (i);
}
