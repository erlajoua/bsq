#ifndef MAHAUT_H
# define MAHAUT_H

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
char			*ft_strjoin(int size, char **strs, char *sep);
char			*ft_strcat(char *s1, char *s2);
int				ft_strlen(char *str);
char			**ft_split(char *str, char *charset);
char			*ft_strdup(char *str, char *charset);
int				count_words(char *str, char *charset);
int				part_of_charset(char c, char *charset);

#endif
