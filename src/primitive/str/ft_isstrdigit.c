/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstrdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/01 15:58:49 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/05 11:33:53 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"
/* make it work with spaces */
int			ft_isstrdigit(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
