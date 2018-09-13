/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 13:38:27 by sdremora          #+#    #+#             */
/*   Updated: 2018/09/09 23:59:55 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"
#include "support.h"
# include "stack.h"

t_element	*create_element(char *data)
{
	t_element *temp;

	temp = (t_element *)malloc(sizeof(*temp));
	if (temp)
	{
		temp->data = data;
		temp->next = NULL;
		temp->prev = NULL;
	}
	return (temp);
}

void		ft_push(t_element **root, char *data)
{
	t_element *temp;
	t_element *prev;

	if (!*root)
	{
		*root = create_element(data);
	}
	else
	{
		prev = *root;
		temp = create_element(data);
		*root = temp;
		temp->next = prev;
		temp->prev = NULL;
		prev->prev = temp;
	}
}

void		ft_push_back(t_element **root, char *data)
{
	t_element *temp;
	t_element *next;

	if (!*root)
	{
		*root = create_element(data);
	}
	else
	{
		temp = *root;
		while (temp->next != NULL)
			temp = temp->next;
		next = create_element(data);
		temp->next = next;
		next->prev = temp;
	}
}

char		*ft_pull(t_element **root)
{
	char		*data;
	t_element	*temp;
	t_element	*next;

	if (!*root)
		return (NULL);
	temp = *root;
	if (temp->next == NULL)
	{
		*root = NULL;
		data = temp->data;
	}
	else
	{
		next = temp->next;
		data = temp->data;
		*root = next;
		next->prev = NULL;
	}
	free(temp);
	return (data);
}

t_element	*ft_found_op(t_element **ar_res)
{
	t_element	*op;
	char		*data;

	op = *ar_res;
	while (op != NULL)
	{
		data = op->data;
		if (!ft_strcmp(data, "+") || !ft_strcmp(data, "-") ||
		!ft_strcmp(data, "*") || !ft_strcmp(data, "/") ||
		!ft_strcmp(data, "%"))
			return (op);
		op = op->next;
	}
	return (op);
}
