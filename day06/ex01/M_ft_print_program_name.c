/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   M_ft_print_program_name.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 11:30:45 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/29 12:22:44 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		main(int argc, char **argv)
{
	char *f_name;

	if (argc > 0)
	{
		f_name = argv[0];
		ft_putstr(f_name);
		ft_putchar('\n');
	}
	return (0);
}
