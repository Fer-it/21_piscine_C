/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 14:02:49 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/23 14:20:36 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char cur_char;

	cur_char = 'z';
	while (cur_char >= 'a')
	{
		ft_putchar(cur_char);
		cur_char--;
	}
}

int	main(void)
{
	ft_print_alphabet();
	ft_putchar('\n');
	return (0);
}
