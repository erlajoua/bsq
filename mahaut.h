#ifndef MAHAUT_H
# define MAHAUT_H

/*
typedef	struct	s_read
{
	int			check;
	char		*str;
	char		**strs;
}				t_read;
*/

typedef	struct	s_variables
{
	int			lines;
	char		empty;
	char		obstacle;
	char		filled;
}				t_variables;

char			get_empty_char(char *str);
char			get_obstacle_char(char *str);
char			get_filled_char(char *str);
t_variables		*store_map_variables(char *str);
int				ft_s_atoi(char *str);
int				get_length(char *str);
int				get_chars(char *str);
char			*tom_strjoin(char *str, char c, int size);
int				**from_map_to_strs(int argc, char **argv);
char			**ft_putstrs(char **strs, char *str, int i);
char			**ft_strs_alloc(char *map);
//t_read			ft_strs_cpy(char *map);
char			*ft_strjoin(int size, char **strs, char *sep);
char			*ft_strcat(char *s1, char *s2);
int				ft_strlen(char *str);
char			**ft_split(char *str, char *charset);
char			*ft_strdup(char *str, char *charset);
int				count_words(char *str, char *charset);
int				part_of_charset(char c, char *charset);
char			**from_chars_to_01(char **strs, char empty, char filled);
int				nb_of_strs(char **strs);

#endif
