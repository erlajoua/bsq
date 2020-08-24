/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 14:32:31 by malatini          #+#    #+#             */
/*   Updated: 2020/08/24 17:40:45 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mahaut.h"

int		main(int argc, char **argv)
{
	int				fd;
	char			c;
	int				bytes_read;
	char			*line;
	int				i;
	t_variables		*vars;
	//Attention si plusieurs fichiers
	if (argc != 2)
		return (0);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (0);
	line = malloc(1);
	line[0] = 0;
	i = 0;
	while ((bytes_read = read(fd, &c, 1)))
	{
		if (bytes_read == -1)
			return (0);
		if (c == '\n')
			break;
		line = tom_strjoin(line, c, i++);
	}

	vars  = store_map_variables(line);
	int **tab = loop_in_lines(fd, vars->lines, vars);

	for (int j = 0; j < vars->lines; j++)
	{
		for (int k = 0; k < 20; k++)
		{
			printf("%i, ", tab[j][k]);
		}
		printf("\n");
	}

	close(fd);
	return (0);
}
