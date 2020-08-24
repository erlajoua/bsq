/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract_first_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 14:55:30 by malatini          #+#    #+#             */
/*   Updated: 2020/08/24 15:46:31 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mahaut.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>

int				ft_s_atoi(char *str)
{
	int i;
	
	int result = 0;
	i = 0;
	while (!(str[i] >= '0' && str[i] <= '9'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
}

int				get_length(char *str)
{
	int i;
	int nb_of_lines;

	i = 0;
	nb_of_lines = ft_s_atoi(str);
	return (nb_of_lines);
}

char		get_empty_char

t_variables		store_map_variables(char *str)
{
	int				i;
	t_variables		*map;

	if (!(map = malloc(sizeof(t_variables) * 1)))
		return (NULL);
	i = 0;
	map.lines = get_length(str);
	map.empty = //Faire la fonction
	map.obstacle = //Faire la fonction
	map.filled = //Faire la fonction
	return (map);
}

char			*tom_strjoin(char *str, char c, int size)
{
	char *new;
	int i;
	
	if (!(new = malloc(size + 2)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		new[i] = str[i];
		++i;
	}
	new[i++] = c;
	new[i] = 0;
	free(str);
	return (new);
}
