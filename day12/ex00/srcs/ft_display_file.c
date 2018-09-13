/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 12:30:58 by sdremora          #+#    #+#             */
/*   Updated: 2018/09/06 22:58:52 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"
#define BUF_SIZE 1024

int	load_file(int argc, char **argv)
{
	if (argc <= 1)
	{
		ft_putstr("File name missing.\n");
		return (-1);
	}
	if (argc == 2)
	{
		return (open(argv[1], O_RDWR));
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (-1);
	}
	return (-1);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	buf[BUF_SIZE + 1];
	int		ret;

	fd = load_file(argc, argv);
	if (fd >= 0)
	{
		ret = 1;
		while ((ret = read(fd, buf, BUF_SIZE)) > 0)
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
		close(fd);
	}
	return (0);
}
