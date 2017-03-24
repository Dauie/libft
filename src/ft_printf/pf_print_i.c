/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/23 18:46:10 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

static void 	putpad_i(attrib *ph, uiput *db);

int				pf_print_i(attrib *ph, uiput *db)
{

	if (ph->mod)
		pf_lmgmt_id(db, ph);
	else
		ph->phd.imt = (int)va_arg(db->ap, int);
	ph->len = ft_numlen(ph->phd.imt, 10);
	pf_putnbr(ph->phd.imt, ph, db);
	if (ph->width)
		putpad_i(ph, db);
	return (0);
}

static void 	putpad_i(attrib *ph, uiput *db)
{
	char	c;

	if (ph->width)
		ph->width = ph->width - ph->len;
	if (ph->zero == TRUE)
		c = '0';
	else
		c = ' ';
	while (ph->width-- > 0)
		pf_putchar(c, ph, db);
	ph->width = 0;
}

int			pf_putnbr(int n, attrib *ph, uiput *db)
{
	long	tmp;

	tmp = n;
	if (ph->sign == TRUE && n > 0)
		pf_putchar('+', ph, db);
	if (tmp < 0 && ph->type != 'u')
	{
		tmp = -tmp;
		pf_putchar('-', ph, db);
	}
	if (ph->width && ph->algn == FALSE)
		putpad_i(ph, db);
	if (tmp > 9)
	{
		pf_putnbr(tmp / 10, ph, db);
		pf_putnbr(tmp % 10, ph, db);
	}
	else
		pf_putchar(tmp + '0', ph, db);
	return (0);
}
