/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 19:10:03 by sdremora          #+#    #+#             */
/*   Updated: 2018/09/03 19:49:53 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *new_ar;

	i = 0;
	new_ar = (int *)malloc(sizeof(int) * length);
	while (i < length)
	{
		new_ar[i] = f(tab[i]);
		i++;
	}
	return (new_ar);
}
