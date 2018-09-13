/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   M_ft_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 12:13:06 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/29 12:36:02 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int negative;
	int n;

	i = 0;
	n = 0;
	negative = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		negative = 1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		n = (10 * n + (str[i] - '0'));
		i++;
	}
	if (negative == 1)
		return (-n);
	return (n);
}

int main(void)
{
	char s[] = "\n\t-12345dfghj";
    char s1[] = " \n\v\f +-12";
	char s2[] = " \n\v\f -+12";
	char s3[] = "\n\t\r +122345";
	printf("%i\n", (ft_atoi(s)));
	printf("%i\n", (ft_atoi(s1)));
	printf("%i\n", (ft_atoi(s2)));
	printf("%i\n", (ft_atoi(s3)));
	printf("\n");
	printf("%i\n", (atoi(s)));
	printf("%i\n", (atoi(s1)));
	printf("%i\n", (atoi(s2)));
	printf("%i\n", (atoi(s3)));
	return 0;
}