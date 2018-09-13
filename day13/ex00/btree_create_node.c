/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 10:55:58 by sdremora          #+#    #+#             */
/*   Updated: 2018/09/07 23:01:28 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree *temp;

	temp = malloc(sizeof(t_btree));
	if (temp)
	{
		temp->right = NULL;
		temp->left = NULL;
		temp->item = item;
	}
	return (temp);
}
