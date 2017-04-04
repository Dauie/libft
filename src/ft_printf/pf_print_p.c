/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 11:18:00 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/04 11:18:16 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

static void		putpad_p(attrib *ph, uiput *db)
{
	char		c;

	if (ph->zero == TRUE)
		c = '0';
	else
		c = ' ';
	ph->width = ph->width - ph->len;
	while (ph->width-- > 0)
		pf_putchar(c, db);
}

static void		printp_ndel(attrib *ph, uiput *db)
{
	char		*ostr;

	ostr = pf_itoabse(ph->phd.uimt, 16, ph);
	pf_putstr(ostr, ph, db);
	ft_strdel(&ostr);
}

int				pf_print_p(attrib *ph, uiput *db)
{
	ph->phd.uimt = va_arg(db->ap, uintmax_t);
	ph->len = ft_numlen(ph->phd.uimt, 16);
	if (ph->width)
		putpad_p(ph, db);
	pf_putstr("0x", ph, db);
	printp_ndel(ph, db);
	return (1);
}
