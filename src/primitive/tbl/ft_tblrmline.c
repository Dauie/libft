/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tblrmline.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 12:22:57 by rlutt             #+#    #+#             */
/*   Updated: 2017/07/24 15:42:39 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/tbl.h"
#include "../../../incl/printf.h"

char			**ft_tblrmline(char **tbl, char *rm, int len)
{	
	int		i;
	char	**res;
	char	**tmp;

	i = -1;
	res = NULL;
	if (!(res = (char **)ft_memalloc(sizeof(char *) * len)))
		return (NULL);
	tmp = res;
	while (++i < len && tbl[i])
	{
		if (ft_strncmp(tbl[i], rm, ft_strlen(rm)) != 0)
		{
			*tmp = ft_strdup(tbl[i]);
			tmp++;
		}
		*tmp = 0;
	}
	return (res);
}