/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tblrepline.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 13:49:03 by rlutt             #+#    #+#             */
/*   Updated: 2017/07/20 14:00:00 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/tbl.h"

int		ft_tblrepline(char **tbl, char *substr, char *repline)
{
	int i;
	
	i = -1;
	if (tbl && substr && repline)
	{
		while (tbl[++i])
		{
			if (ft_strncmp(tbl[i], substr, ft_strlen(substr)) == 0)
			{
				free(tbl[i]);
				tbl[i] = repline;
			}
		}
	}
	return (1);
}