/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 12:20:14 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/25 12:44:12 by sdremora         ###   ########.fr       */
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
	while (power > 0)
	{
		result = nb * result;
		power--;
	}
	return (result);
}
