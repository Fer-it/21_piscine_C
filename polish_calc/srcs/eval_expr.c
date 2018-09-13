/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 13:37:25 by sdremora          #+#    #+#             */
/*   Updated: 2018/09/10 00:00:12 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"
# include "stack.h"
#include "support.h"

int	ft_operation(char *op, char *n1, char *n2)
{
	int i1;
	int i2;
	int result;

	i1 = ft_atoi(n1);
	i2 = ft_atoi(n2);
	if (!ft_strcmp(op, "+"))
		result = i1 + i2;
	if (!ft_strcmp(op, "-"))
		result = i1 - i2;
	if (!ft_strcmp(op, "*"))
		result = i1 * i2;
	if (!ft_strcmp(op, "/"))
		result = i1 / i2;
	if (!ft_strcmp(op, "%"))
		result = i1 % i2;
	return (result);
}

int	eval_expr(t_element **ar_res)
{
	t_element *n1;
	t_element *n2;
	t_element *prev;
	t_element *temp;

	while ((temp = ft_found_op(ar_res)) != NULL)
	{
		temp = ft_found_op(ar_res);
		n2 = temp->prev;
		n1 = n2->prev;
		prev = n1->prev;
		temp->data = ft_itoa(ft_operation(temp->data, n1->data, n2->data));
		temp->prev = prev;
		if (prev != NULL)
			prev->next = temp;
		else
			*ar_res = temp;
		free(n1);
		free(n2);
	}
	return (0);
}
