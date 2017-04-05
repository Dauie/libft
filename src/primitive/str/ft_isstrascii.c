/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isstrascii.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/01 16:18:58 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/05 11:33:53 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"
/* make it work with spaces */
int			ft_isstrascii(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (ft_isascii(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}
