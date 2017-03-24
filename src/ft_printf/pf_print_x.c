/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/23 17:33:19 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

static void 	actn_0x(attrib *ph, uiput *db)
{
	ph->actn = FALSE;
	pf_putstr("0x", ph, db);
}

static void 	manage_xattrib(attrib *ph)
{
	if (ph->hash == TRUE)							//need
		ph->actn = TRUE;
	if (ph->algn == TRUE)
		ph->zero = FALSE;
	if (ph->width)
		ph->width += ft_numlen(ph->phd.imt, 16);
	if (ph->prec && ph->width)
	{
		if (ph->prec > ph->width)					//need
			ph->width = ph->prec;
		ph->width = ph->width - ph->len;
	}
	else if (ph->width && !ph->prec)
		ph->width = ph->width - ph->len;
	else if (ph->prec && !ph->width)
		ph->width = ph->prec - ph->len;
}


static void 	putpad_x(attrib *ph, uiput *db)
{
	char		c;

	if (ph->zero == TRUE)
		c = '0';
	else
		c = ' ';
	ph->width = ph->width - ph->len;
	while (ph->width-- > 0)
		pf_putchar(c, ph, db);

}

static void 	printx_ndel(attrib *ph, uiput *db)
{
	char		*ostr;

	ostr = pf_itoabse(ph->phd.l, 16, ph);
	pf_putstr(ostr, ph, db);
	ft_strdel(&ostr);
}

int				pf_print_x(attrib *ph, uiput *db)
{
	if (ph->mod)
		pf_lmgmt_oux(db, ph);
	else
		ph->phd.l = (long)va_arg(db->ap, int);
	ph->len = ft_numlen(ph->phd.l, 16);
	manage_xattrib(ph);
	if (ph->algn == TRUE)
	{
		if (ph->actn == TRUE)
			actn_0x(ph, db);
		printx_ndel(ph, db);
		putpad_x(ph, db);
	}
	else
	{
		if (ph->actn == TRUE && ph->width)
			actn_0x(ph, db);
		putpad_x(ph, db);
		if (ph->actn == TRUE)
			actn_0x(ph, db);
		printx_ndel(ph, db);
	}
	return (0);
}
