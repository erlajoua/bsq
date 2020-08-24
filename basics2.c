/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basics2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 12:10:02 by malatini          #+#    #+#             */
/*   Updated: 2020/08/24 12:12:32 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "mahaut.h"

int		part_of_charset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		count_words(char *str, char *charset)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && part_of_charset(str[i], charset))
			i++;
		if (str[i] && !part_of_charset(str[i], charset))
		{
			count++;
			while (str[i] && !part_of_charset(str[i], charset))
				i++;
		}
	}
	return (count);
}

char	*ft_strdup(char *str, char *charset)
{
	int		i;
	char	*copy;

	i = 0;
	while (str[i] && !part_of_charset(str[i], charset))
		i++;
	copy = (char *)malloc(sizeof(char) * i + 1);
	i = 0;
	while (str[i] && !part_of_charset(str[i], charset))
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	**ft_split(char *str, char *charset)
{
	int		nb_of_words;
	char	**new_strs;
	int		i;

	i = 0;
	nb_of_words = count_words(str, charset);
	new_strs = (char **)malloc(sizeof(char *) * nb_of_words + 1);
	while (*str)
	{
		while (*str && part_of_charset(*str, charset))
			str++;
		if (*str && !part_of_charset(*str, charset))
		{
			new_strs[i] = ft_strdup(str, charset);
			i++;
			while (*str && !part_of_charset(*str, charset))
				str++;
		}
	}
	new_strs[i] = 0;
	return (new_strs);
}
