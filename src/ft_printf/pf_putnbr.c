/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 11:38:13 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/04 11:38:24 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

void		putprec(attrib *ph, uiput *db)
{
	while (ph->prec-- > 0)
		pf_putchar('0', db);
}

int			pf_putnbr(uintmax_t n, attrib *ph, uiput *db)
{
	uintmax_t	tmp;

	tmp = n;
	if (ph->prec)
		putprec(ph, db);
	if (tmp == 0 && ph->prec == 0 && ph->wprc == TRUE)
	{
		pf_putchar(' ', db);
		return (1);
	}
	if (tmp > 9)
	{
		pf_putnbr(tmp / 10, ph, db);
		pf_putnbr(tmp % 10, ph, db);
	}
	else
		pf_putchar(tmp + '0', db);
	return (1);
}
