/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tbldel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/01 14:24:02 by rlutt             #+#    #+#             */
/*   Updated: 2017/05/12 21:11:18 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/tbl.h"

void		ft_tbldel(char **tbl)
{
	char	**tmp;
	int		i;

	i = 0;
	if (tbl)
		tmp = tbl;
	else
		return ;
	while (tmp[i])
	{
		if (tmp[i])
		{
			free(tmp[i]);
			tmp[i] = NULL;
		}
		i++;
	}
	free(tbl);
	tbl = NULL;
}
