/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 23:04:55 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/30 23:09:55 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		i;
	int		j;
	char	*am_pm;

	if (hour > 24 || hour < 0)
		return ;
	i = hour % 12;
	j = hour / 12;
	if (i == 11)
	{
		if (j == 0)
			printf("THE FOLLOWING TAKES PLACE \
BETWEEN 11.00 A.M. AND 00.00 P.M.");
		else if (j == 1)
			printf("THE FOLLOWING TAKES PLACE BETWEEN \
11.00 P.M. AND 00.00 A.M.");
		return ;
	}
	if (j == 0)
		am_pm = "AM";
	else
		am_pm = "PM";
	printf("THE FOLLOWING TAKES PLACE BETWEEN \
%i.00 %s AND %i.00 %s", i, am_pm, i + 1, am_pm);
}
