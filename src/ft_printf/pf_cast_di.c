/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_cast_di.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 18:40:44 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/22 18:53:41 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

static void pf_dil(attrib *ph, uiput *db)
{
	ph->phd.l = va_arg(db->ap, long);
	if (ph->phd.l < 0)
	{
		ph->phd.l = -ph->phd.l;
		ph->wneg = TRUE;
	}
	ph->phd.uimt = (uintmax_t)ph->phd.l;
}

static void pf_dill(attrib *ph, uiput *db)
{
	ph->phd.l = (unsigned long long)va_arg(db->ap, int);
	if (ph->phd.l < 0)
	{
		ph->phd.l = -ph->phd.l;
		ph->wneg = TRUE;
	}
	ph->phd.uimt = (uintmax_t)ph->phd.l;
}

static void pf_dih(attrib *ph, uiput *db)
{
	ph->phd.l = (int)va_arg(db->ap, int);
	if (ph->phd.l < 0)
	{
		ph->phd.l = -ph->phd.l;
		ph->wneg = TRUE;
	}
	ph->phd.uimt = (uintmax_t)ph->phd.l;
}

static void pf_diz(attrib *ph, uiput *db)
{
	ph->phd.st = (size_t)va_arg(db->ap, int);
	ph->phd.uimt = (uintmax_t)ph->phd.st;
}

static void pf_dij(attrib *ph, uiput *db)
{
	ph->phd.imt = va_arg(db->ap, intmax_t);
	if (ph->phd.imt < 0)
	{
		ph->phd.imt = ph->phd.imt;
		ph->wneg = TRUE;
	}
	ph->phd.uimt = (uintmax_t)ph->phd.imt;
}

void 		pf_lmgmt_id(uiput *db, attrib *ph)
{
	if (ph->mod == 'l')
		pf_dil(ph, db);
	else if (ph->mod == 'L')
		pf_dill(ph, db);
	else if (ph->mod == 'h')
		pf_dih(ph, db);
	else if (ph->mod == 'H')
		pf_dih(ph, db);
	else if (ph->mod == 'z')
		pf_diz(ph, db);
	else if (ph->mod == 'j')
		pf_dij(ph, db);
}
