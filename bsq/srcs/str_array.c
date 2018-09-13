/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_array.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsprigga <bsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 20:39:10 by bsprigga          #+#    #+#             */
/*   Updated: 2018/09/12 20:39:11 by bsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include "support.h"

t_str	*str_initial(int limit)
{
	t_str	*temp;
	char	*str;

	temp = NULL;
	str = NULL;
	temp = (t_str *)malloc(sizeof(t_str));
	str = (char *)malloc(sizeof(char) * limit);
	if (temp && str)
	{
		temp->length = 1;
		temp->limit = limit;
		temp->str = str;
		temp->str[0] = '\0';
	}
	return (temp);
}

int		str_resize(t_str *ar_str)
{
	int		is_false;
	char	*new_str;

	is_false = -8;
	new_str = NULL;
	new_str = (char *)malloc(sizeof(char) * ar_str->limit * 2);
	if (new_str)
	{
		is_false = 0;
		ft_strcpy(new_str, ar_str->str);
		free(ar_str->str);
		ar_str->str = new_str;
		ar_str->limit = ar_str->limit * 2;
	}
	return (is_false);
}

int		add_char(t_str *ar_str, char c)
{
	int length;
	int limit;

	length = ar_str->length;
	limit = ar_str->limit;
	if (length >= limit)
		if (str_resize(ar_str))
			return (-8);
	ar_str->str[length - 1] = c;
	ar_str->str[length] = '\0';
	ar_str->length = length + 1;
	return (0);
}
