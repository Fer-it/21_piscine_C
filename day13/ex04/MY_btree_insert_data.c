/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MY_btree_insert_data.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 21:25:14 by sdremora          #+#    #+#             */
/*   Updated: 2018/09/07 22:36:46 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <unistd.h>

int		ft_strcmp(void *v1, void *v2)
{
	char	*s1;
	char	*s2;

	s1 = (char *)v1;
	s2 = (char *)v2;
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_putstr(void *v)
{
	char *str;

	str = (char *)v;
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

t_btree	*btree_create_node(void *item)
{
	t_btree *temp;

	temp = malloc(sizeof(t_btree));
	if (temp)
		*temp = (t_btree){
			.right = NULL,
			.left = NULL,
			.item = item
		};
	return (temp);
}

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL)
		return ;
	applyf(root->item);
	if (root->left != NULL)
		btree_apply_prefix(root->left, applyf);
	if (root->right != NULL)
		btree_apply_prefix(root->right, applyf);
}

void btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
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


int		main(void)
{
	t_btree *root;

	root = NULL;
	btree_insert_data(&root, "5", &ft_strcmp);
	btree_insert_data(&root, "3", &ft_strcmp);
	btree_insert_data(&root, "8", &ft_strcmp);
	btree_insert_data(&root, "4", &ft_strcmp);
	btree_insert_data(&root, "1", &ft_strcmp);
	btree_insert_data(&root, "3", &ft_strcmp);
	// btree_insert_data(&root, "0", &ft_strcmp);
	// btree_insert_data(&root, "7", &ft_strcmp);
	// btree_insert_data(&root, "6", &ft_strcmp);
	// btree_insert_data(&root, "2", &ft_strcmp);
	// btree_insert_data(&root, "4", &ft_strcmp);
	// btree_insert_data(&root, "7", &ft_strcmp);
	ft_putstr("<");
	btree_apply_prefix(root, &ft_putstr);
	ft_putstr("\n>531024487679\n");
	/* ft_putstr("<"); */
	/* btree_apply_infix(root, &ft_putstr); */
	/* ft_putstr("\n>012344567789\n"); */
	/* ft_putstr("<"); */
	/* btree_apply_suffix(root, &ft_putstr); */
	/* ft_putstr("\n>021443677985\n"); */
	return (0);
}