/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   M_ft_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 10:02:10 by sdremora          #+#    #+#             */
/*   Updated: 2018/08/30 14:33:36 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strcpy(char *dest, char *src)
{
	while (1)
	{
		*dest = *src;
		if (*src == '\0')
			break ;
		dest++;
		src++;
	}
	return (dest);
}

void main(void)
{
char test1[256] = "asdf";
printf("%s", ft_strcpy(test1, "qwerty\n"));
printf("%s", ft_strcpy(test1, ""));
printf("%s", ft_strcpy(test1, "hell0\n"));
return (0);	
}
