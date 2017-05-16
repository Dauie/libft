/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstrdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/01 15:58:49 by rlutt             #+#    #+#             */
/*   Updated: 2017/05/12 21:28:32 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"

int			ft_isstrdigit(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if (ft_isspc(str[i]))
			continue;
		if (!ft_isdigit(str[i]))
			return (0);
	}
	return (1);
}
