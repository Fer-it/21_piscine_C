/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 13:16:47 by sdremora          #+#    #+#             */
/*   Updated: 2018/09/05 13:27:09 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		count;
	t_list	*temp;

	count = 0;
	if (begin_list != 0)
	{
		temp = begin_list;
		while (temp->next)
		{
			temp = temp->next;
			count++;
		}
		count++;
	}
	return (count);
}
