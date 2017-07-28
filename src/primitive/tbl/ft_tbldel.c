/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tbldel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/01 14:24:02 by rlutt             #+#    #+#             */
/*   Updated: 2017/07/27 19:26:48 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/tbl.h"
#include "../../../incl/printf.h"

void		ft_tbldel(char **tbl, int len)
{
	char	**tmp;
	int		i;

	i = -1;
	if (tbl && *tbl)
		tmp = tbl;
	else
		return ;
	while (++i < len && tmp[i])
	{
		free(tmp[i]);
		tmp[i] = NULL;
	}
	free(tbl);
	tbl = NULL;
}
