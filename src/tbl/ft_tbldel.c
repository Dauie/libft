/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tbldel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/01 14:24:02 by rlutt             #+#    #+#             */
/*   Updated: 2018/06/26 10:58:05 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/tbl.h"

void		ft_tbldel(char ***tbl)
{
	char		**tmp;
	int			i;

	i = -1;
	if (tbl && *tbl)
		tmp = *tbl;
	else
		return ;
	while (tmp[++i])
	{
		free(tmp[i]);
		tmp[i] = NULL;
	}
	free(*tbl);
	*tbl = NULL;
}
