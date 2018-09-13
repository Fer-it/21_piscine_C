/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 22:37:12 by sdremora          #+#    #+#             */
/*   Updated: 2018/09/07 23:34:21 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
			int (*cmpf)(void *, void *))
{
	void *result;

	result = NULL;
	if (root == NULL)
		return (NULL);
	if (root->left != NULL)
		result = btree_search_item(root->left, data_ref, cmpf);
	if (result == NULL)
		if (cmpf(data_ref, root->item) == 0)
			result = root->item;
	if (root->right != NULL && result == NULL)
		result = btree_search_item(root->right, data_ref, cmpf);
	return (result);
}
