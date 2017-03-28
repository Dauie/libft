/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_cast_di.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 18:40:44 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/28 15:02:11 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

static void pf_dil(attrib *ph, uiput *db)
{
	ph->phd.ll = va_arg(db->ap, long long int);
	if (ph->phd.ll < 0)
	{
		ph->phd.uimt = ph->phd.ll * -1;
		ph->wneg = TRUE;
		ph->actn = TRUE;
		ph->width--;
	}
	else
		ph->phd.uimt = (long)ph->phd.ll;

}

static void pf_dill(attrib *ph, uiput *db)
{
	ph->phd.ll = va_arg(db->ap, long long int);
	if (ph->phd.ll < 0)
	{
		ph->phd.uimt = ph->phd.ll * -1;
		ph->wneg = TRUE;
		ph->actn = TRUE;
		ph->width--;
	}
	else
		ph->phd.uimt = (long long)ph->phd.ll;
}

static void pf_dih(attrib *ph, uiput *db)
{
	ph->phd.s = (short)va_arg(db->ap, int);
	if (ph->phd.s < 0)
	{
		ph->phd.uimt = (short)ph->phd.s * -1;
		ph->wneg = TRUE;
		ph->actn = TRUE;
		ph->width--;
	}
	else
		ph->phd.uimt = (short)ph->phd.s;
}

static void pf_dihh(attrib *ph, uiput *db)
{
	ph->phd.i = (signed char)va_arg(db->ap, int);
	if (ph->phd.i < 0)
	{
		ph->phd.uimt = (signed char)ph->phd.i * -1;
		ph->wneg = TRUE;
		ph->actn = TRUE;
		ph->width--;
	}
	else
		ph->phd.uimt = (signed char)ph->phd.i;
}

static void pf_diz(attrib *ph, uiput *db)
{
	ph->phd.st = va_arg(db->ap, size_t);
	ph->phd.uimt = (size_t)ph->phd.uimt;
}

static void pf_dij(attrib *ph, uiput *db)
{
	ph->phd.imt = va_arg(db->ap, intmax_t);
	if (ph->phd.imt < 0)
	{
		ph->phd.uimt = ph->phd.imt * -1;
		ph->wneg = TRUE;
		ph->actn = TRUE;
		ph->width--;
	}
	else
		ph->phd.uimt = ph->phd.imt;
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
		pf_dihh(ph, db);
	else if (ph->mod == 'z')
		pf_diz(ph, db);
	else if (ph->mod == 'j')
		pf_dij(ph, db);
	else
	{
		ph->phd.imt = va_arg(db->ap, int);
		if (ph->phd.imt < 0)
		{
			ph->phd.uimt = ph->phd.imt * -1;
			ph->wneg = TRUE;
			ph->actn = TRUE;
			ph->width--;
		}
	}
}
