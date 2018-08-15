/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenvar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 15:03:10 by rlutt             #+#    #+#             */
/*   Updated: 2018/08/14 15:03:33 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/tbl.h"

char			*ft_getenvar(char **env, char *qry, size_t qlen)
{
	char			*res;
	int				i;

	i = -1;
	res = NULL;
	while (env[++i])
	{
		if (ft_strncmp(env[i], qry, qlen) == 0 &&
			env[i][qlen] == '=')
			if (!(res = ft_strdup(env[i])))
				return (NULL);
	}
	return (res);
}
