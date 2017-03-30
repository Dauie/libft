/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/29 18:06:41 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

static void 	actn_0x(attrib *ph, uiput *db)
{
	ph->actn = FALSE;
	pf_putstr("0x", ph, db);
}

static int 	manage_xattrib(attrib *ph)
{
	if (ph->prec == 0 && ph->wprc == TRUE && !ph->width && ph->hash == TRUE)
		return (0);
	if (ph->phd.imt == 0 && ph->hash && !ph->prec)
		ph->hash = FALSE;
	if (ph->hash == TRUE)							//need
		ph->actn = TRUE;
	if (ph->algn == TRUE)
		ph->zero = FALSE;
	if (ph->width && ph->hash == FALSE)
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
	return (1);
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

	ostr = pf_itoabse(ph->phd.uimt, 16, ph);
	pf_putstr(ostr, ph, db);
	ft_strdel(&ostr);
}

int				pf_print_x(attrib *ph, uiput *db)
{
	pf_lmgmt_oux(db, ph);
	ph->len = ft_numlen(ph->phd.uimt, 16);
	if (!(manage_xattrib(ph)))
		return (0);
	if (ph->algn == TRUE)
	{
		if (ph->actn == TRUE)
			actn_0x(ph, db);
		printx_ndel(ph, db);
		putpad_x(ph, db);
	}
	else
	{
		if (ph->actn == TRUE && ph->width && ph->zero == TRUE)
			actn_0x(ph, db);
		if (ph->width)
			putpad_x(ph, db);
		if (ph->actn == TRUE)
			actn_0x(ph, db);
		printx_ndel(ph, db);
	}
	return (1);
}
