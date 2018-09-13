/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MY_ft_print_comb.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 15:45:34 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/26 13:54:07 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

 void	ft_print_comb(void)
 {
 	char num[3];

 	num[0] = '0';
 	while(num[0] <= '9')
 	{
 		num[1] = num[0] + 1;
 		while (num[1] <= '9')
 		{
 			num[2] = num[1] + 1;
 			while(num[2] <= '9')
 			{
 				ft_putchar(num[0]);
 				ft_putchar(num[1]);
 				ft_putchar(num[2]);
 				if (!(num[0] == '7'))
 				{
 					ft_putchar(',');
 					ft_putchar(' ');
 				}
 				num[2]++;
 			}
 		num[1]++;
 		}
 	num[0]++;
 	}
 }

 int main(void)
 {
 	ft_print_comb();
 }
