/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 19:46:09 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/25 20:49:25 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int		i;
	int		root;
	short	flag;

	flag = 1;
	if (nb < 1)
	{
		return (0);
	}
	i = 0;
	root = (nb / 2) + 1;
	while (flag)
	{
		if ((root * root) == nb)
		{
			break ;
		}
		root--;
		if (root < 1)
			break ;
	}
	return (root);
}
