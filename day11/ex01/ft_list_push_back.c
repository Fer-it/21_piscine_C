/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 15:04:32 by sdremora          #+#    #+#             */
/*   Updated: 2018/09/05 12:56:57 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *temp;

	if (*begin_list == 0)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	temp = *begin_list;
	while (temp->next != 0)
		temp = temp->next;
	temp->next = ft_create_elem(data);
}
