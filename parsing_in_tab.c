/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_in_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 16:26:24 by malatini          #+#    #+#             */
/*   Updated: 2020/08/24 16:47:26 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mahaut.h"

//Fonction pour lire la ligne, la stocker et la free
char		

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
