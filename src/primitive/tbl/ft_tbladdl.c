#include "../../../incl/tbl.h"
#include "../../../incl/str.h"
#include "../../../incl/mem.h"

char		**ft_tbladdl(char **tbl, char *line)
{
	int		i;
	int		len;
	char	**res;
	char	**tmp;

	i = -1;
	if (tbl)
	{
		len = (ft_tbllen(tbl) + 1);
		res = (char **)ft_memalloc(sizeof(char *) * len);
		tmp = res;
		while (++i < len)
		{
			*tmp = ft_strdup(*tbl);
			tbl++;
			tmp++;
		}
		tmp++;
		*tmp = ft_strdup(line);
	}
	else
	{
		res = (char **)ft_memalloc(sizeof(char *) * 2);
		*res = ft_strdup(line);
	}
	return (res);
}
