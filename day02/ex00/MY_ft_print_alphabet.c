/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 12:56:48 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/23 13:29:18 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char cur_char;

	cur_char = 'a';
	while (cur_char <= 'z')
	{
		ft_putchar(cur_char);
		cur_char++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}
