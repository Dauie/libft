/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cnttotspc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 15:09:24 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/16 12:29:19 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"

size_t		ft_cnttotspc(char *str)
{
	size_t i;

	i = 0;
	while (*str)
	{
		if (*str == ' ' || *str == '\n' || *str == '\v'
			|| *str == '\t' || *str == '\f' || *str == '\r')
			i++;
		str++;
	}
	return (i);
}