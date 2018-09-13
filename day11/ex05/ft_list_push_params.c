/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 13:50:53 by sdremora          #+#    #+#             */
/*   Updated: 2018/09/05 22:21:04 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

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

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*first;
	int		i;

	first = 0;
	i = 0;
	while (i < ac)
	{
		ft_list_push_front(&first, av[i]);
		i++;
	}
	return (first);
}
