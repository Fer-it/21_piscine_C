/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 10:32:26 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/23 10:37:55 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char cur_char;

	cur_char = '0';
	while (cur_char <= '9')
	{
		ft_putchar(cur_char);
		cur_char++;
	}
}
