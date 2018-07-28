/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstrascii.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/01 16:18:58 by rlutt             #+#    #+#             */
/*   Updated: 2018/06/26 10:58:05 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/str.h"

int			ft_isstrascii(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if (ft_isspc(str[i]))
			continue;
		if (!ft_isascii(str[i]))
			return (0);
	}
	return (1);
}
