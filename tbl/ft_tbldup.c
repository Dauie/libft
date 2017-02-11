/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tbldup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 15:26:49 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/11 15:26:54 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
