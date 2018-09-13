/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 19:38:59 by sdremora          #+#    #+#             */
/*   Updated: 2018/09/09 23:46:34 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "support.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((s1[i] == '\0' && s2[i] != '\0') || (s2[i] == '\0' && s1[i] != '\0'))
		return (s1[i] - s2[i]);
	return (0);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	int		i;
	int		y;

	len = 1;
	i = 0;
	y = n;
	while ((y /= 10) != 0)
		len++;
	y = len;
	result = (char *)malloc(sizeof(char) * (len + 1));
	while (len > 0)
	{
		i = n % 10;
		n = n / 10;
		result[len - 1] = i + '0';
		len--;
	}
	result[y] = '\0';
	return (result);
}
