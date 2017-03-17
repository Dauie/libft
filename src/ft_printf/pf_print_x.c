/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/16 20:02:43 by rlutt            ###   ########.fr       */
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
