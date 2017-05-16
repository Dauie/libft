/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstralnum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/01 15:59:33 by rlutt             #+#    #+#             */
/*   Updated: 2017/05/12 21:22:17 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"

int			ft_isstralnum(char *str)
{
	int		i;

	i = -1;
	while (str[++i])
	{
		if (ft_isspc(str[i]))
			continue;
		if (ft_isalnum(str[i]) == 0)
			return (0);
	}
	return (1);
}
