/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tbldel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/01 14:24:02 by rlutt             #+#    #+#             */
/*   Updated: 2018/05/21 15:45:30 by dauie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/tbl.h"

void		ft_tbldel(char **tbl, size_t len)
{
	char		**tmp;
	int			i;

	i = -1;
	if (tbl && *tbl)
		tmp = tbl;
	else
		return ;
	while (++i < (int)len && tmp[i])
	{
		free(tmp[i]);
		tmp[i] = NULL;
	}
	free(tbl);
}
