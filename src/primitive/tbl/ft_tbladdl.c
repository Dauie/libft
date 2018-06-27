/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tbladdl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 11:42:58 by rlutt             #+#    #+#             */
/*   Updated: 2018/06/26 10:58:05 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/tbl.h"
#include "../../../incl/str.h"
#include "../../../incl/mem.h"

char		**ft_tbladdl(char **tbl, char *line)
{
	int		i;
	size_t	len;
	char	**res;
	char	**tmp;

	i = -1;
	len = ft_tbllen(tbl);
	res = (char **)ft_memalloc(sizeof(char *) * (len + 2));
	tmp = res;
	while (++i < (int)len)
	{
		*tmp = ft_strdup(*tbl);
		tbl++;
		tmp++;
	}
	*tmp = ft_strdup(line);
	tmp++;
	*tmp = 0;
	return (res);
}
