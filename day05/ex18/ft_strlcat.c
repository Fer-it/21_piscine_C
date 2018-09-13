/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 21:21:27 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/28 22:59:13 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_src;
	unsigned int	len_dest;
	int				len_to_cat;

	len_src = 0;
	len_dest = 0;
	while (*dest != '\0')
	{
		len_dest++;
		dest++;
	}
	while (src[len_src] != '\0')
		len_src++;
	len_to_cat = size - len_dest - 1;
	while (*src != '\0' && len_to_cat > 0)
	{
		*dest = *src;
		dest++;
		src++;
		len_to_cat--;
	}
	*dest = '\0';
	if (size < len_dest)
		len_dest = size;
	return (len_dest + len_src);
}
