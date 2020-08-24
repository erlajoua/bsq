/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variables.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 18:40:28 by malatini          #+#    #+#             */
/*   Updated: 2020/08/24 18:45:35 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int				get_length(char *str)
{
	int i;
	int nb_of_lines;

	i = 0;
	nb_of_lines = ft_s_atoi(str);
	return (nb_of_lines);
}

int				get_chars(char *str)
{
	int i;

	i = 0;
	//Fonction map invalide
	while (str[i] >= '0' && str[i] <= '9' && str[i])
		i++;
	return (i);
}

char			get_empty_char(char *str)
{
	char	empty_char;
	int		i;

	i = get_chars(str);
	empty_char = str[i];
	return (empty_char);
}

char			get_obstacle_char(char *str)
{
	char	obstacle_char;
	int		i;

	i = get_chars(str) + 1;
	obstacle_char = str[i];
	return (obstacle_char);
}

char			get_filled_char(char *str)
{
	char	filled_char;
	int		i;

	i = get_chars(str) + 2;
	filled_char = str[i];
	return (filled_char);
}
