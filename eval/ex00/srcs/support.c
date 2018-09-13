/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 15:16:30 by sdremora          #+#    #+#             */
/*   Updated: 2018/09/10 00:00:11 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "support.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
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

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_copystr(char *str, int start, int end)
{
	char	*copy;
	int		i;

	copy = (char *)malloc(sizeof(char) * (end - start + 1));
	i = 0;
	if (copy)
	{
		while (start <= end)
		{
			copy[i] = str[start];
			i++;
			start++;
		}
	}
	return (copy);
}
