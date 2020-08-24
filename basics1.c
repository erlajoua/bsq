/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basics1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 12:08:49 by malatini          #+#    #+#             */
/*   Updated: 2020/08/24 12:09:31 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "mahaut.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (i < size)
		len = len + ft_strlen(strs[i++]) + ft_strlen(sep);
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (string == NULL)
		return (NULL);
	i = 0;
	string[0] = 0;
	while (i < size)
	{
		ft_strcat(string, strs[i++]);
		if (i < size)
			ft_strcat(string, sep);
	}
	return (string);
}
