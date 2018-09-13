/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsprigga <bsprigga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 20:39:19 by bsprigga          #+#    #+#             */
/*   Updated: 2018/09/12 20:39:20 by bsprigga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "support.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_atoi(char *str)
{
	int i;
	int negative;
	int n;

	i = 0;
	n = 0;
	negative = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		negative = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		n = (10 * n + (str[i] - '0'));
		i++;
	}
	if (negative == 1)
		return (-n);
	return (n);
}
