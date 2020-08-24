/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/24 18:34:44 by malatini          #+#    #+#             */
/*   Updated: 2020/08/24 18:34:47 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef	struct	s_variables
{
	int			lines;
	char		empty;
	char		obstacle;
	char		filled;
}				t_variables;

void			map_error(void);
int				**loop_in_lines(int fd, t_variables *vars, int **tab);
int				**store_lines(int size);
int				*convert_line(char *line, int size, t_variables *vars);
char			get_empty_char(char *str);
char			get_obstacle_char(char *str);
char			get_filled_char(char *str);
t_variables		*store_map_variables(char *str);
int				ft_s_atoi(char *str);
int				get_length(char *str);
int				get_chars(char *str);
char			*tom_strjoin(char *str, char c, int size);

#endif
