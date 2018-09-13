/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 12:09:35 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/24 12:09:43 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_ft(int *nbr)
{
	*nbr = 42;
}


int	main(void)
{
	int i = 0;
	ft_ft(&i);
	ft_putchar(i/10+48);
	ft_putchar(i%10+48);
	return (i);
}