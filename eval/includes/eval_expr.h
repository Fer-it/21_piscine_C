/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 13:36:04 by sdremora          #+#    #+#             */
/*   Updated: 2018/09/10 00:08:24 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H
# include "stack.h"
# include <stdlib.h>

char		*add_end_op(char *str);
void		c_to_polish(char *input, t_element **ar_res, t_element **ar_w);
int			ft_operation(char *op, char *n1, char *n2);
int			eval_expr(t_element **ar_res);
int			f_a(char *str, int i, t_element **ar_res, t_element **ar_w);
int			f_number(char *str, int start,
t_element **ar_res, t_element **ar_w);
int			f_plus(char *str, int start, t_element **ar_res, t_element **ar_w);
int			f_del(char *str, int start, t_element **ar_res, t_element **ar_w);
int			f_brace(char *str, int start, t_element **ar_res, t_element **ar_w);
t_element	*create_element(char *data);
void		ft_push(t_element **root, char *data);
void		ft_push_back(t_element **root, char *data);
char		*ft_pull(t_element **root);
t_element	*ft_found_op(t_element **ar_res);

#endif
