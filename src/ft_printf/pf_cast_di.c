/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_cast_di.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 18:40:44 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/24 11:09:46 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

static void pf_dil(attrib *ph, uiput *db)
{
	ph->phd.imt = va_arg(db->ap, long);
}

static void pf_dill(attrib *ph, uiput *db)
{
	ph->phd.imt = va_arg(db->ap, long long);
}

static void pf_dih(attrib *ph, uiput *db)
{
	ph->phd.imt = (short)va_arg(db->ap, int);
}

static void pf_diz(attrib *ph, uiput *db)
{
	ph->phd.imt = va_arg(db->ap, size_t);
}

static void pf_dij(attrib *ph, uiput *db)
{
	ph->phd.imt = va_arg(db->ap, intmax_t);
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
