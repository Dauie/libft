/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_cast_di.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 18:40:44 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/02 16:24:40 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

static void pf_dil(attrib *ph, uiput *db)
{
	ph->phd.l = va_arg(db->ap, intmax_t);
	if (ph->phd.l < 0)
	{
		ph->phd.uimt = ph->phd.l * -1;
		ph->wneg = TRUE;
		ph->actn = TRUE;
	}
	else
		ph->phd.uimt = ph->phd.l;

}

static void pf_dill(attrib *ph, uiput *db)
{
	ph->phd.imt = va_arg(db->ap, intmax_t);
	if (ph->phd.imt < 0)
	{
		ph->phd.uimt = ph->phd.imt * -1;
		ph->wneg = TRUE;
		ph->actn = TRUE;
	}
	else
		ph->phd.uimt = ph->phd.imt;
}

static void pf_dih(attrib *ph, uiput *db)
{
	ph->phd.imt = (short)va_arg(db->ap, intmax_t);
	if (ph->phd.s < 0)
	{
		ph->phd.uimt = (short)ph->phd.s * -1;
		ph->wneg = TRUE;
		ph->actn = TRUE;
	}
	else
		ph->phd.uimt = ph->phd.imt;
}

static void pf_dihh(attrib *ph, uiput *db)
{
	ph->phd.imt = (char)va_arg(db->ap, size_t);
	if (ph->phd.imt < 0)
	{
		ph->phd.uimt = ph->phd.imt * -1;
		ph->wneg = TRUE;
		ph->actn = TRUE;
	}
	else
		ph->phd.uimt = (signed char)ph->phd.imt;
}

static void pf_dij(attrib *ph, uiput *db)
{
	ph->phd.imt = va_arg(db->ap, intmax_t);
	if (ph->phd.imt < 0)
	{
		ph->phd.uimt = ph->phd.imt * -1;
		ph->wneg = TRUE;
		ph->actn = TRUE;
	}
	else
		ph->phd.uimt = ph->phd.imt;
}

void 		pf_lmgmt_id(uiput *db, attrib *ph)
{
	if (ph->mod == 'l' || ph->type == 'D')
		pf_dil(ph, db);
	else if (ph->mod == 'L')
		pf_dill(ph, db);
	else if (ph->mod == 'h')
		pf_dih(ph, db);
	else if (ph->mod == 'H')
		pf_dihh(ph, db);
	else if (ph->mod == 'z')
		ph->phd.imt = va_arg(db->ap, size_t);
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
		}
	}
}
