/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 15:32:35 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/04 17:22:23 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"
#include "../../incl/put.h"
#include "../../incl/num.h"

int			pf_putnbr(uiput *db, attrib *ph, int n)
{
	long	tmp;

	tmp = n;
	if (ph->sign == TRUE && n > 0)
	{
		pf_putchar('+');
		ph->width -= 1;
	}
	if (ph->width)
		pf_putpad_c(ph, db);
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
	return (ft_numlen(n, 10));
}
