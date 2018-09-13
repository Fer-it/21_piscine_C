/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 15:18:00 by sdremora          #+#    #+#             */
/*   Updated: 2018/09/09 23:49:03 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPPORT_H
# define SUPPORT_H
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
char	*ft_copystr(char *str, int start, int end);
int		ft_strcmp(char *s1, char *s2);
char	*ft_itoa(int n);

#endif
