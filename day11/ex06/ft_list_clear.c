/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:12:08 by sdremora          #+#    #+#             */
/*   Updated: 2018/09/05 22:34:45 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *current;
	t_list *next;

	current = *begin_list;
	while (current != 0)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*begin_list = 0;
}
