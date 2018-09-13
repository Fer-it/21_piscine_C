/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 13:26:23 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/30 20:34:22 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (0);
	}
	i = 0;
	array = (int *)malloc(sizeof(*array) * (max - min));
	if (min == max)
	{
		array[i] = min;
	}
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
