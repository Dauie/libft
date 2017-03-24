/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_cast_oux.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 18:40:51 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/23 18:39:20 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

static void pf_ouxl(attrib *ph, uiput *db)
{
	ph->phd.uimt = va_arg(db->ap, unsigned long int);
}

static void pf_ouxll(attrib *ph, uiput *db)
{
	ph->phd.uimt = va_arg(db->ap, unsigned long long int);
}

static void pf_ouxh(attrib *ph, uiput *db)
{
	ph->phd.uimt = va_arg(db->ap, unsigned int);
}

static void pf_ouxhh(attrib *ph, uiput *db)
{
	ph->phd.uimt = va_arg(db->ap, unsigned int);
}

static void pf_ouxz(attrib *ph, uiput *db)
{
	ph->phd.uimt = va_arg(db->ap, unsigned long long);
}

static void pf_ouxj(attrib *ph, uiput *db)
{
	ph->phd.uimt = va_arg(db->ap, unsigned int);
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
