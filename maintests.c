/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 15:49:53 by malatini          #+#    #+#             */
/*   Updated: 2020/08/24 16:19:25 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include "mahaut.h"

int		main(void)
{
	char test[5] = "9.ox";
	t_variables map = *store_map_variables(test);
	printf("%c\n", map.empty);
	printf("%c\n", map.obstacle);
	printf("%c\n", map.filled);
	return (0);
}
