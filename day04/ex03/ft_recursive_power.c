/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 12:45:57 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/25 12:46:03 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;

	if (power < 0 || nb == 0)
	{
		return (0);
	}
	result = 1;
	if (power > 0)
	{
		result = nb * ft_iterative_power(nb, power-1);
	}
	return (result);
}
