/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tbladdl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 11:42:58 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/16 17:11:57 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	len = ft_tbllen(tbl);
	res = (char **)ft_memalloc(sizeof(char *) * (len + 2));
	tmp = res;
	while (++i < len)
	{
		*tmp = ft_strdup(*tbl);
		tbl++;
		tmp++;
	}
	*tmp = ft_strdup(line);
	return (res);
}
