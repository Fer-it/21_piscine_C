/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 21:05:05 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/25 22:50:46 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int devider;

	if (nb <= 0 || nb == 1)
	{
		return (0);
	}
	devider = nb - 1;
	while (1)
	{
		if (devider == 1)
		{
			return (1);
		}
		if ((nb % devider) == 0)
		{
			return (0);
		}
		devider--;
	}
}
