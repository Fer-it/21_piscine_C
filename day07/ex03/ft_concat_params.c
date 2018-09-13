/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 17:14:42 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/31 05:41:04 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while (dest[i] != '\0')
		i++;
	while (src[y] != '\0')
	{
		dest[i] = src[y];
		i++;
		y++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		count;
	int		i;

	count = 0;
	i = 1;
	while (i < argc)
	{
		count = count + ft_strlen(argv[i]);
		i++;
	}
	str = (char *)malloc(sizeof(*str) * count + i + 1);
	i = 1;
	*str = '\0';
	while (i < argc)
	{
		ft_strcat(str, argv[i]);
		if (i + 1 < argc)
			ft_strcat(str, "\n");
		i++;
	}
	return (str);
}
