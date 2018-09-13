/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 15:56:25 by sdremora          #+#    #+#             */
/*   Updated: 2018/09/05 21:13:54 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *temp;

	if (*begin_list == 0)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	temp = ft_create_elem(data);
	temp->next = *begin_list;
	*begin_list = temp;
}
