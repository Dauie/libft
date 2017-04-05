/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 15:32:35 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/05 10:45:01 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/put.h"

void		ft_putnbr(intmax_t n)
{
	intmax_t tmp;

	tmp = n;
	if (tmp < 0)
	{
		tmp = -tmp;
		ft_putchar('-');
	}
	if (tmp > 9)
	{
		ft_putnbr(tmp / 10);
		ft_putnbr(tmp % 10);
	}
	else
		ft_putchar(tmp + '0');
}
