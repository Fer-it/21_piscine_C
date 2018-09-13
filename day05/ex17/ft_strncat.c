/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 12:16:09 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/29 12:01:46 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int num_changed;
	int i;
	int y;

	i = 0;
	y = 0;
	num_changed = 0;
	while (dest[i] != '\0')
		i++;
	while (src[y] != '\0')
	{
		if (nb <= num_changed)
			break ;
		dest[i] = src[y];
		i++;
		y++;
		num_changed++;
	}
	dest[i] = '\0';
	return (dest);
}
