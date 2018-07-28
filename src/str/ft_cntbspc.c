/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cntbspc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 13:04:48 by rlutt             #+#    #+#             */
/*   Updated: 2018/06/26 10:58:04 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/str.h"

size_t		ft_cntbspc(const char *str)
{
	size_t	cnt;

	cnt = 0;
	while (str[cnt] == ' ' || str[cnt] == '\n' || str[cnt] == '\t' ||
			str[cnt] == '\v' || str[cnt] == '\r' || str[cnt] == '\f')
		cnt++;
	return (cnt);
}
