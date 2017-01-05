/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 01:10:34 by rlutt             #+#    #+#             */
/*   Updated: 2016/11/28 15:43:27 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int			ft_atoi(char *str)
{
	int		sign;
	int		cnt;
	int		res;

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
