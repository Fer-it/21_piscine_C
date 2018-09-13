/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 21:50:07 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/25 22:51:59 by sdremora         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int next_prime;

	next_prime = nb + 1;
	while (ft_is_prime(next_prime) != 1)
	{
		next_prime++;
	}
	return (next_prime);
}
