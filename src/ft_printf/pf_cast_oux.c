/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_cast_oux.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 18:40:51 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/22 18:46:24 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

static void pf_ouxl(attrib *ph, uiput *db)
{
	ph->phd.l = va_arg(db->ap, long);
	if (ph->phd.l < 0)
	{
		ph->phd.l = -ph->phd.l;
		ph->wneg = TRUE;
	}
	ph->phd.uimt = (uintmax_t)ph->phd.l;
}

static void pf_ouxll(attrib *ph, uiput *db)
{
	ph->phd.ll = va_arg(db->ap, long long);
	if (ph->phd.ll < 0)
	{
		ph->phd.ll = -ph->phd.ll;
		ph->wneg = TRUE;
	}
	ph->phd.uimt = ph->phd.ll;
}

static void pf_ouxh(attrib *ph, uiput *db)
{
	ph->phd.us = va_arg(db->ap, int);
	ph->phd.uimt = ph->phd.us;
}

static void pf_ouxhh(attrib *ph, uiput *db)
{
	ph->phd.uc = va_arg(db->ap, int);
	ph->phd.uimt = ph->phd.uc;
}

static void pf_ouxz(attrib *ph, uiput *db)
{
	ph->phd.st = va_arg(db->ap, size_t);
	ph->phd.uimt = ph->phd.st;
}

static void pf_ouxj(attrib *ph, uiput *db)
{
	ph->phd.uimt = va_arg(db->ap, uintmax_t);
}

void 		pf_lmgmt_oux(uiput *db, attrib *ph)
{
	if (ph->mod == 'l')
		pf_ouxl(ph, db);
	else if (ph->mod == 'L')
		pf_ouxll(ph, db);
	else if (ph->mod == 'h')
		pf_ouxh(ph, db);
	else if (ph->mod == 'H')
		pf_ouxhh(ph, db);
	else if (ph->mod == 'z')
		pf_ouxz(ph, db);
	else if (ph->mod == 'j')
		pf_ouxj(ph, db);
}
