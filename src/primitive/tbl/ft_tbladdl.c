/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tbladdl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 11:42:58 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/04 15:11:59 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/tbl.h"
#include "../../../incl/str.h"
#include "../../../incl/mem.h"

char		**ft_tbladdl(char **tbl, char *line)
{
	int		i;
	char	**res;
	char	**tmp;

	i = -1;
	if (tbl)
	{
		res = (char **)ft_memalloc(sizeof(char *) * (ft_tbllen(tbl) + 1));
		tmp = res;
		while ((size_t)++i < ft_tbllen(tbl))
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
