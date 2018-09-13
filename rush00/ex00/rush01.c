/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 19:15:28 by dwdraugr          #+#    #+#             */
/*   Updated: 2018/08/26 19:31:26 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	top(int x)
{
	int i;

	i = 0;
	ft_putchar('/');
	while (i < x - 2)
	{
		ft_putchar('*');
		i++;
	}
	if (x != 1)
		ft_putchar('\\');
	ft_putchar('\n');
}

void	body(int x, int y)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < y - 2)
	{
		i = 0;
		while (i < x)
		{
			if ((i == 0) || (i == x - 1))
				ft_putchar('*');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}

void	bottom(int x, int y)
{
	int i;

	i = 0;
	if (y != 1)
	{
		ft_putchar('\\');
		while (i < x - 2)
		{
			ft_putchar('*');
			i++;
		}
		if (x != 1)
			ft_putchar('/');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		top(x);
		body(x, y);
		bottom(x, y);
	}
}
