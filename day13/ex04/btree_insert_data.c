/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 21:25:14 by sdremora          #+#    #+#             */
/*   Updated: 2018/09/07 23:02:04 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item,
		int (*cmpf)(void *, void *))
{
	t_btree *temp;

	if (*root == NULL)
	{
		*root = btree_create_node(item);
		return ;
	}
	temp = *root;
	if (cmpf(item, temp->item) >= 0)
	{
		if (temp->right == NULL)
			temp->right = btree_create_node(item);
		else
			btree_insert_data(&temp->right, item, cmpf);
	}
	else
	{
		if (temp->left == NULL)
			temp->left = btree_create_node(item);
		else
			btree_insert_data(&temp->left, item, cmpf);
	}
}
