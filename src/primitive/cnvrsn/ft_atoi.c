/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 01:10:34 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/17 12:24:18 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/cnvrsn.h"

int				ft_atoi(char *str)
{
	int			sign;
	size_t		cnt;
	long long	res;

	sign = 1;
	res = 0;
	cnt = ft_cntbspc(str);
	if (str[cnt] == '-' || str[cnt] == '+')
	{
		sign = (str[cnt] == '-') ? -1 : 1;
		cnt++;
	}
	while (!(str[cnt] < '0') && !(str[cnt] > '9'))
	{
		res = (res * 10 + (str[cnt] - '0'));
		cnt++;
	}
	return (res * sign);
}
