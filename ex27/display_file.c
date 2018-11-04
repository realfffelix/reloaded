/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdubois <fdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 15:54:55 by fdubois           #+#    #+#             */
/*   Updated: 2018/11/04 16:28:29 by fdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	readinput(int fd)
{
	int readval;
	char buf;

	buf = '\0';
	readval = read(fd, &buf, 1);
	while (readval > 0)
	{
		write(1, &buf, 1);
		readval = read(fd, &buf, 1);
	}
	if (readval < 0)
	{
		write(2, "Read error.\n", 12);
		return (-1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int fd;
		int ret;

		fd = open(av[1], O_RDONLY);
		ret = readinput(fd);
		if (ret == -1)
			return (0);
		close(fd);
	}
	if (ac > 2)
		write(2, "Too many arguments.\n", 20);
	if (ac == 1)
		write(2, "File name missing.\n", 19);
	return (0);
}
