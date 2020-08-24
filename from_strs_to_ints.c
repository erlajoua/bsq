/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   from_strs_to_ints.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 12:44:25 by malatini          #+#    #+#             */
/*   Updated: 2020/08/24 14:11:18 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mahaut.h"
#include <unistd.h>
#include <stdlib.h>

char			**from_chars_to_01(char **strs, char empty, char filled)
{
	int i;

	i = 0;
	while (strs[i])
	{
		if (strs[i] == empty)
			strs[i] = '0';
		else if (strs[i] == filled)
			strs[i] = '1';
		i++;
	}
	return (strs);
}

int				nb_of_strs(char **strs)
{
	int i;
	
	i = 0;
	while (strs[i])
		i++;
	return (i);
}

t_map			*from_01_to_map(char **strs)
{
	int		len;
	int		i;
	int		j;
	t_map	*map;

	len = nb_of_strs(strs);
	i = 0;
	if (!(map = malloc(sizeof(t_map) * len)))
	   return (NULL);
	while (strs[i][j])
	{
		j = 0;
		while (strs[i][j])
		{
			map[i][j] = strs[i][j];
			j++;
		}
		i++;
	}
	return (map);
}
