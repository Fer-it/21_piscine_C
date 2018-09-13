/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 21:07:07 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/28 21:10:49 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_converts(int nbr, char *base, int flength_er)
{
	int numbers[50];
	int i;
	int j;

	i = 0;
	while (nbr != 0)
	{
		numbers[i] = nbr % flength_er;
		nbr = nbr / flength_er;
		i++;
	}
	i--;
	j = 0;
	while (i >= j)
	{
		ft_putchar(*(base + numbers[i]));
		i--;
	}
}

int		ft_lb(char *base)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!base)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = j + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int length_er;

	length_er = ft_lb(base);
	if (!length_er)
		return ;
	ft_converts(nbr, base, length_er);
}
