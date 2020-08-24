/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_in_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 16:26:24 by malatini          #+#    #+#             */
/*   Updated: 2020/08/24 16:55:44 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mahaut.h"

int		*loop_in_lines(int fd, int size, t_variables *vars)
{

	char	c;
	int		bytes_read;

	char *line;
	line = malloc(1);
	line = 0;
	int i = 0;

	int **tab = store_lines(size);
	int line_pos = 0;
	
	while ((bytes_read = read(fd, &c, 1)))
	{
		if (bytes_read == -1)
			return (0);
		if (c == '\n')
		{
			tab[line_pos++] = convert_line(line, i, vars);
			i = 0;
			line = malloc(1);
			line = 0;
		}
		line = tom_strjoin(line, c, i++);
	}
}

int		**store_lines(int size)
{
	int **tab;
	int i;

	if (!(tab = malloc(sizeof(int*) * size)))
		return (NULL);
	i = 0;
	return (tab);
}

int		*convert_line(char *line, int size, t_variables *vars)
{
	int i;
	int *tab;

	if (!(tab = malloc(size * sizeof(int))))
		return (NULL);
	i = 0;
	while (line[i])
	{
		if (line[i] == vars->empty)
			tab[i] = 0;
		else if (line[i] == vars->obstacle)
			tab[i] = 1;
		else
			return (NULL);
	}
	return tab;
}
