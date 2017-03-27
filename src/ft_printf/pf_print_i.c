/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/27 11:06:26 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

static void 	putpad_i(attrib *ph, uiput *db);

int				pf_print_i(attrib *ph, uiput *db)
{

	if (ph->mod)
		pf_lmgmt_id(db, ph);
	else
		ph->phd.imt = va_arg(db->ap, intmax_t);
	ph->len = ft_numlen(ph->phd.imt, 10);
	if (ph->width)
		ph->width = ph->width - ph->len;
	if (ph->width && ph->algn == TRUE)
		putpad_i(ph, db);
	pf_putnbr(ph->phd.imt, ph, db);
	if (ph->width)
		putpad_i(ph, db);
	return (1);
}

static void 	putpad_i(attrib *ph, uiput *db)
{
	char	c;

	c = ' ';
	if (ph->zero == TRUE)
		c = '0';
	while (ph->width-- > 0)
		pf_putchar(c, ph, db);
}

int			pf_putnbr(int n, attrib *ph, uiput *db)
{
	long	tmp;

	tmp = n;
	if (ph->sign == TRUE && n > 0)
	{
		pf_putchar('+', ph, db);
		ph->width--;
	}
	if (tmp < 0)
	{
		tmp = -tmp;
		pf_putchar('-', ph, db);
	}
	if (ph->width)
	{
		ph->zero = TRUE;
		putpad_i(ph, db);
	}
	if (tmp > 9)
	{
		pf_putnbr(tmp / 10, ph, db);
		pf_putnbr(tmp % 10, ph, db);
	}
	else
		pf_putchar(tmp + '0', ph, db);
	return (1);
}
