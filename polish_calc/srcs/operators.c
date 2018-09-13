/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 16:17:04 by sdremora          #+#    #+#             */
/*   Updated: 2018/09/10 00:04:18 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"
#include "support.h"
# include "stack.h"

int	f_a(char *str, int i, t_element **ar_res, t_element **ar_w)
{
	char *temp;
	char *cur_data;

	if (*ar_w == NULL)
	{
		ft_push(ar_w, "@");
	}
	else
	{
		while (ft_strcmp((*ar_w)->data, "@"))
		{
			ft_push_back(ar_res, ft_pull(ar_w));
		}
	}
	return (i);
}

int	f_number(char *str, int start, t_element **ar_res, t_element **ar_w)
{
	int		end;
	char	*copy;

	end = start;
	while (str[end + 1] >= '0' && str[end + 1] <= '9')
		end++;
	copy = ft_copystr(str, start, end);
	ft_push_back(ar_res, copy);
	return (end);
}

int	f_plus(char *str, int start, t_element **ar_res, t_element **ar_w)
{
	char *cur_data;
	char *sign;

	cur_data = (*ar_w)->data;
	sign = ft_copystr(str, start, start);
	if (!ft_strcmp(cur_data, "@") || !ft_strcmp(cur_data, "("))
	{
		ft_push(ar_w, sign);
	}
	else
	{
		ft_push_back(ar_res, ft_pull(ar_w));
		start--;
	}
	return (start);
}

int	f_del(char *str, int start, t_element **ar_res, t_element **ar_w)
{
	char *cur_data;
	char *sign;

	cur_data = (*ar_w)->data;
	sign = ft_copystr(str, start, start);
	if (!ft_strcmp(cur_data, "@") || !ft_strcmp(cur_data, "(") ||
		!ft_strcmp(cur_data, "+") || !ft_strcmp(cur_data, "-"))
	{
		ft_push(ar_w, sign);
	}
	else
	{
		ft_push_back(ar_res, ft_pull(ar_w));
		start--;
	}
	return (start);
}

int	f_brace(char *str, int start, t_element **ar_res, t_element **ar_w)
{
	char *cur_data;
	char *brace;

	cur_data = (*ar_w)->data;
	brace = ft_copystr(str, start, start);
	if (!ft_strcmp(brace, "("))
		ft_push(ar_w, brace);
	if (!ft_strcmp(brace, ")"))
	{
		if (!ft_strcmp(cur_data, "("))
		{
			ft_pull(ar_w);
		}
		else
		{
			ft_push_back(ar_res, ft_pull(ar_w));
			start--;
		}
	}
	return (start);
}
