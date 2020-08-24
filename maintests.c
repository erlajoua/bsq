/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 15:49:53 by malatini          #+#    #+#             */
/*   Updated: 2020/08/24 16:10:50 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>
#include "mahaut.h"

int		main(void)
{
	char test[5] = "9.ox";
	printf("> %c\n", get_empty_char(test));
	return (0);
}
