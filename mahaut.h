#ifndef MAHAUT_H
# define MAHAUT_H

typedef	struct	s_read
{
	int			check;
	char		*str;
	char		**strs;
}				t_read;

typedef	struct	s_map
{
	int			i;
	int			y;
}				t_map;

int				**from_map_to_strs(int argc, char **argv);
char			**ft_putstrs(char **strs, char *str, int i);
char			**ft_strs_alloc(char *map);
t_read			ft_strs_cpy(char *map);
char			*ft_strjoin(int size, char **strs, char *sep);
char			*ft_strcat(char *s1, char *s2);
int				ft_strlen(char *str);
char			**ft_split(char *str, char *charset);
char			*ft_strdup(char *str, char *charset);
int				count_words(char *str, char *charset);
int				part_of_charset(char c, char *charset);
char			**from_chars_to_01(char **strs, char empty, char filled);
t_map			*from_01_to_map(char **strs);
int				nb_of_strs(char **strs);

#endif
