/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 13:20:40 by sdremora          #+#    #+#             */
/*   Updated: 2018/09/09 23:59:43 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"
#include "support.h"
# include "stack.h"

int	main(int argc, char **argv)
{
	t_element *ar_w;
	t_element *ar_res;
	t_element *temp;

	ar_w = NULL;
	ar_res = NULL;
	if (argc == 2)
	{
		c_to_polish(argv[1], &ar_res, &ar_w);
		eval_expr(&ar_res);
	}
	ft_putstr(ar_res->data);
	ft_putstr("\n");
	return (0);
}
