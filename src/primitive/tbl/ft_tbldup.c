/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tbldup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 15:26:49 by rlutt             #+#    #+#             */
/*   Updated: 2017/07/24 14:43:47 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/tbl.h"
#include "../../../incl/str.h"
#include "../../../incl/mem.h"

char		**ft_tbldup(char **tbl, int len)
{
	int		i;
	char	**res;
	char	**tmp;

	i = -1;
	res = (char **)ft_memalloc(sizeof(char *) * (len + 1));
	tmp = res;
	while (++i < len && tbl && *tbl)
	{
		*tmp = ft_strdup(*tbl);
		tbl++;
		tmp++;
	}
	*tmp = 0;
	return (res);
}
