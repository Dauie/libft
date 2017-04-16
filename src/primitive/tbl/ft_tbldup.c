/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tbldup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 15:26:49 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/14 21:30:31 by rlutt            ###   ########.fr       */
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
	while (++i < len)
	{
		*tmp = ft_strdup(*tbl);
		tbl++;
		tmp++;
	}
	return (res);
}
