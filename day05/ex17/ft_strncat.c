/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 12:16:09 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/28 12:41:08 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int num_changed;

	num_changed = 0;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		if (nb <= num_changed)
			break ;
		*dest = *src;
		dest++;
		src++;
		num_changed++;
	}
	*dest = '\0';
	return (dest);
}
