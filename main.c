/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 14:32:31 by malatini          #+#    #+#             */
/*   Updated: 2020/08/24 15:49:42 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mahaut.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	c;
	int		bytes_read;
	//Attention si plusieurs fichiers
	if (argc != 2)
		return (0);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (0);
	char *line;
	line = malloc(1);
	line = 0;
	int i = 0;
	while ((bytes_read = read(fd, &c, 1)))
	{
		if (bytes_read == -1)
			return (0);
		if (c == '\n')
			break;
		line = tom_strjoin(line, c, i++);
	}
	//printf("%s\n", line);
	close(fd);
	return (0);
}
