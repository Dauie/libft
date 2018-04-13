/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tbldup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 15:26:49 by rlutt             #+#    #+#             */
/*   Updated: 2018/04/13 13:39:38 by dauie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/tbl.h"
#include "../../../incl/str.h"
#include "../../../incl/mem.h"

char			**ft_tbldup(char **tbl, size_t len)
{
	int			i;
	char		**res;
	char		**tmp;

	i = -1;
	if (!(res = (char **)ft_memalloc(sizeof(char *) * (len + 1))))
		return (NULL);
	tmp = res;
	while (++i < (int)len && tbl && *tbl)
	{
		*tmp = ft_strdup(*tbl);
		tbl++;
		tmp++;
	}
	*tmp = 0;
	return (res);
}
