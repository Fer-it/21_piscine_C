/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 21:17:14 by sdremora          #+#    #+#             */
/*   Updated: 2018/09/07 23:01:25 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL)
		return ;
	if (root->left != NULL)
		btree_apply_prefix(root->left, applyf);
	applyf(root->item);
	if (root->right != NULL)
		btree_apply_prefix(root->right, applyf);
}
