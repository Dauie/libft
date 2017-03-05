/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 15:32:35 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/04 18:00:05 by rlutt            ###   ########.fr       */
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
		db->tot += 1;
	}
	if (ph->width)
		pf_putpad_c(ph, db);
	if (tmp < 0)
	{
		tmp = -tmp;
		ft_putchar('-');
		db->tot += 1;
	}
	if (tmp > 9)
	{
		pf_putnbr(db, ph, tmp / 10);
		pf_putnbr(db, ph, tmp % 10);
	}
	else
		pf_putchar(tmp + '0');
	return (0);
}
