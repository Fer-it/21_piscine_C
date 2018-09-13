/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 21:13:28 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/28 21:14:15 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_hex(char hp)
{
	char *hex;

	hex = "123456789abcdef";
	if (hp > 16)
	{
		ft_hex(hp / 10);
		ft_hex(hp % 10);
	}
	else
		ft_putchar(hex[hp]);
}

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 32) && str[i] >= 0)
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			ft_hex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i += 1;
	}
}
