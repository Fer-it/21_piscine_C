/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 21:34:09 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/25 09:58:49 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		c_end;
	int		c_start;
	int		num;
	char	temp;

	c_start = 0;
	c_end = 0;
	num = 0;
	while (str[num] != '\0')
	{
		num++;
	}
	num--;
	while (c_end > c_start)
	{
		temp = result[c_start];
		result[c_start] = result[c_end];
		result[c_end] = temp;
		c_start++;
		c_end--;
	}
	return (str);
}
