/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsprigga <bsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 20:31:33 by bsprigga          #+#    #+#             */
/*   Updated: 2018/09/12 20:44:22 by bsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

struct					s_point {
	int x;
	int y;
	int a;
};

struct					s_option {
	int		max_x;
	int		max_y;
	char	empty;
	char	obstacle;
	char	full;
	char	**map;
	int		*rows_length;
};

struct					s_str{
	int		length;
	int		limit;
	char	*str;
};

typedef struct s_point	t_point;
typedef struct s_option	t_option;
typedef struct s_str	t_str;

int						input_read(int argc, char *file_name, t_option *option);
int						**found_square(t_option *option);
t_point					*resolve_found(int **resolve, t_option *option);
void					print_table(t_option *option, t_point answer);
int						add_char(t_str *ar_str, char c);
t_str					*str_initial(int limit);
int						row_read(int fd, t_option *option, int i);
int						check_first_row(int fd, t_option *option);

#endif
