/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdremora <sdremora@student.42.ft>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 12:30:58 by sdremora          #+#    #+#             */
/*   Updated: 2018/09/06 23:36:07 by sdremora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	print_stdin(void)
{
	char	buf[BUF_SIZE + 1];
	int		ret;

	while (1)
	{
		ret = read(0, buf, BUF_SIZE);
		write(1, buf, ret);
	}
}

int		load_file(int argc, char *argv)
{
	int fd;

	fd = open(argv, O_RDWR);
	if (fd < 0)
	{
		ft_putstr("cat: ");
		ft_putstr(argv);
		if (errno == EISDIR)
			ft_putstr(": Is a directory\n");
		if (errno == ENOENT)
			ft_putstr(": No such file or directory\n");
		if (errno == EACCES)
			ft_putstr(": Permission denied\n");
		return (-1);
	}
	return (fd);
}

int		main(int argc, char **argv)
{
	int		i;
	int		fd;
	char	buf[BUF_SIZE + 1];
	int		ret;

	i = 0;
	if (argc == 1)
		print_stdin();
	while (++i < argc)
	{
		if (argv[i][0] == '-' && ft_strlen(argv[i]) == 1)
			print_stdin();
		fd = load_file(argc, argv[i]);
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
	}
	return (0);
}
