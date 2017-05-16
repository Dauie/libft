/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstralpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/01 15:59:15 by rlutt             #+#    #+#             */
/*   Updated: 2017/05/12 21:23:13 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"

int			ft_isstralpha(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if (ft_isspc(str[i]))
			continue;
		if (ft_isalpha(str[i]) == 0)
			return (0);
	}
	return (1);
}
