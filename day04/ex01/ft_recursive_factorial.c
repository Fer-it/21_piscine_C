/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 11:07:48 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/25 17:02:09 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int result;

	if (nb < 0 || nb >= 13)
	{
		return (0);
	}
	if (nb == 0)
	{
		result = 1;
	}
	if (nb > 0)
	{
		result = ft_recursive_factorial(nb - 1) * nb;
	}
	return (result);
}
