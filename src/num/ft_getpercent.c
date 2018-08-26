/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getpercet.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 17:24:29 by rlutt             #+#    #+#             */
/*   Updated: 2018/08/25 17:24:43 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/num.h"

float			ft_getpercent(size_t a, size_t b)
{
	size_t		diff;

	diff = a - b;
	if (diff <= 0)
		return (0.00f);
	else
		return (((float)diff / a) * 100);
}
