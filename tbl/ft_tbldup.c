#include "fillit.h"

char		**ft_tbldup(char **tbl)
{
	int		i;
	int		ylen;
	char	**res;
	char	**tmp;

	i = -1;
	ylen = ft_tbllen(tbl);
	res = (char **)ft_memalloc(sizeof(char *) * ylen);
	tmp = res;
	while (++i < ylen)
	{
		*tmp = ft_strdup(*tbl);
		tbl++;
		tmp++;
	}
	return (res);
}
