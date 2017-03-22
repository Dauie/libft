/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/22 13:20:02 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

static void 	putpad_x(attrib *ph, uiput *db);

int				pf_print_x(attrib *ph, uiput *db)
{
	if (ph->mod)
		pf_lmgmt_oux(db, ph);
	else
		ph->phd.l = (long)va_arg(db->ap, int);
	if (ph->phd.l < 0)
	{
		ph->phd.l = -ph->phd.l;
		ph->sign = TRUE;
	}
	ph->len = ft_numlen(ph->phd.l, 16);
	if (ph->hash == TRUE)
		ph->actn = TRUE;
	if (ph->algn == TRUE)
	{
		pf_putstr(pf_itoabse(ph->phd.l, 16, ph), ph, db);
		putpad_x(ph, db);
	}
	else
	{
		putpad_x(ph, db);
		pf_putstr(pf_itoabse(ph->phd.l, 16, ph), ph, db);
	}
	return (0);
}

static void 	putpad_x(attrib *ph, uiput *db)
{
	if (ph->hash == TRUE)
		ph->width--;
	else
		ph->width++;
	ph->width = ph->width - ph->len;
	while (ph->width-- > 1)
		pf_putchar(' ', ph, db);
	if (ph->hash == TRUE)
		pf_putstr("0x", ph, db);
}

void pf_xl(attrib *ph, uiput *db)
{
	ph->phd.l = (long)va_arg(db->ap, long);
	if (ph->phd.l < 0)
		ph->wneg = TRUE;
	ph->phd.uimt = (uintmax_t)ph->phd.l;
}

void pf_xll(attrib *ph, uiput *db)
{
	ph->phd.ll = (long long)va_arg(db->ap, long long);
	if (ph->phd.ll < 0)
		ph->wneg = TRUE;
	ph->phd.uimt = (uintmax_t)ph->phd.ll;
}

void pf_xh(attrib *ph, uiput *db)
{
	ph->phd.us = (unsigned short)va_arg(db->ap, long);
	ph->phd.uimt = (uintmax_t)ph->phd.us;
}

void pf_xhh(attrib *ph, uiput *db)
{
	ph->phd.uc = (unsigned char)va_arg(db->ap, long);
	ph->phd.uimt = (uintmax_t)ph->phd.uc;
}

void pf_xz(attrib *ph, uiput *db)
{
	ph->phd.st = (size_t)va_arg(db->ap, size_t);
	ph->phd.uimt = (uintmax_t)ph->phd.st;
}

void pf_xj(attrib *ph, uiput *db)
{
	ph->phd.uimt = (uintmax_t)va_arg(db->ap, uintmax_t);
	ph->phd.uimt = (uintmax_t)ph->phd.uimt;
}

void 		pf_lmgmt_oux(uiput *db, attrib *ph)
{
	if (ph->mod == 'l')
		pf_xl(ph, db);
	else if (ph->mod == 'L')
		pf_xll(ph, db);
	else if (ph->mod == 'h')
		pf_xh(ph, db);
	else if (ph->mod == 'H')
		pf_xhh(ph, db);
	else if (ph->mod == 'z')
		pf_xz(ph, db);
	else if (ph->mod == 'j')
		pf_xj(ph, db);
}
