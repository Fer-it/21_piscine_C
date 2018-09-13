/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 11:34:49 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/25 11:37:32 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb < 0 || nb >= 13)
	{
		return (0);
	}
	while (nb > 0)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
