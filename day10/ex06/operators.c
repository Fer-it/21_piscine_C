/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operators.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:04:41 by sdremora          #+#    #+#             */
/*   Updated: 2018/09/04 12:47:47 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_putnbr(int nb);

void	ft_op_plus(int n1, int n2)
{
	ft_putnbr(n1 + n2);
	ft_putstr("\n");
}

void	ft_op_minus(int n1, int n2)
{
	ft_putnbr(n1 - n2);
	ft_putstr("\n");
}

void	ft_op_mult(int n1, int n2)
{
	ft_putnbr(n1 * n2);
	ft_putstr("\n");
}

void	ft_op_div(int n1, int n2)
{
	if (n2 == 0)
		ft_putstr("Stop : division by zero\n");
	else
	{
		ft_putnbr(n1 / n2);
		ft_putstr("\n");
	}
}

void	ft_op_mod(int n1, int n2)
{
	if (n2 == 0)
		ft_putstr("Stop : modulo by zero\n");
	else
	{
		ft_putnbr(n1 % n2);
		ft_putstr("\n");
	}
}
