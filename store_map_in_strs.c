#include	"mahaut.h"
#include	<unistd.h>
#include	<fcntl.h>
#include	<stdlib.h>
#include	<sys/types.h>
#include	<sys/uio.h>
#include	<unistd.h>

char		**ft_putstrs(char **strs, char *str, int i)
{
	int j;

	j = 0;
	if (!(strs[i] = malloc(sizeof(char) * ft_strlen(str + 1))))
	{
		while (i-- >= 0)
			free (strs[i]);
		return (NULL);
	}
	while (str[j])
	{
		strs[i] = str[j];
		j++;
	}
	strs[i][j] = '\0';
	return (strs);
}

char		**ft_strs_alloc(char *map)
{
	int fd;
	int tmp;
	int len;
	char buf[10];
	char **strs;
	tmp = 0;
	len = 0;
	fd = open(dict, O_RDONLY);
	while (tmp = read(fd, buf, 10))
		len++;
	close (fd);
	if (!(strs = malloc(sizeof(char *) * len + 1)))
		return (NULL);
	return (strs);
}

t_read		ft_strs_cpy(char *map)
{
	t_read res;
	int fd;
	int ret;

	res.check = 0;
	fd = open(map, 0_RDONLY);
	res.strs = ft_strs_alloc(map);
	if (!(res.str = malloc(sizeof(char *) * 11)))
	{
			res.str = NULL;
			free (res.strs);
			return (res);
	}
	while (ret = read(fd, res.str, 10))
	{
		res.str[ret] = '\0';
		if (!(res.strs = ft_putstrs(res.str, res.strs, res.check)))
		{
			free (res.str);
			free (res.strs);
			return (res);
		}
		res.check++;
	}
	close (fd);
	return (res);
}

int			**from_map_to_strs(int argc, char **argv)
{
	t_read res;
	char *str;
	int i;
}
