/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conventer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 15:06:15 by sdremora          #+#    #+#             */
/*   Updated: 2018/09/09 23:59:18 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"
# include "stack.h"
# include "support.h"

char	*add_end_op(char *str)
{
	char	*result;
	int		len;
	int		i;

	i = 1;
	len = ft_strlen(str);
	result = (char *)malloc(sizeof(*result) * (len + 2 + 1));
	result[0] = '@';
	while (i <= len)
	{
		result[i] = str[i - 1];
		i++;
	}
	result[i++] = '@';
	result[i++] = '\0';
	return (result);
}

void	c_to_polish(char *input, t_element **ar_res, t_element **ar_w)
{
	int i;

	i = 0;
	input = add_end_op(input);
	while (input[i] != '\0')
	{
		if (input[i] == '@')
			i = f_a(input, i, ar_res, ar_w);
		if (input[i] >= '0' && input[i] <= '9')
			i = f_number(input, i, ar_res, ar_w);
		if (input[i] == '+' || input[i] == '-')
			i = f_plus(input, i, ar_res, ar_w);
		if (input[i] == '*' || input[i] == '/' || input[i] == '%')
			i = f_del(input, i, ar_res, ar_w);
		if (input[i] == '(' || input[i] == ')')
			i = f_brace(input, i, ar_res, ar_w);
		i++;
	}
}
