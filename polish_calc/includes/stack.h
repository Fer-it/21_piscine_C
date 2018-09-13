/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 23:57:06 by sdremora          #+#    #+#             */
/*   Updated: 2018/09/09 23:58:18 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H
# include <stdlib.h>

struct						s_element
{
	char					*data;
	struct s_element		*next;
	struct s_element		*prev;
};

typedef struct s_element	t_element;

#endif
