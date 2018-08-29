/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_timediff.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 17:14:44 by rlutt             #+#    #+#             */
/*   Updated: 2018/08/25 17:15:52 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/num.h"

long double			ft_timediff_ms(struct timeval *then, struct timeval *now)
{
	long double		x;

	x = (double)(then->tv_sec - now->tv_sec) * 1000.0L +
		(double)(then->tv_usec - now->tv_usec) / 1000.0L;
	return (x);
}

long double			ft_timediff_sec(struct timeval *then, struct timeval *now)
{
	return ((then->tv_sec - now->tv_sec) +
			((then->tv_usec - now->tv_usec) * 1000000));
}
