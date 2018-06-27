/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2018/06/26 10:58:04 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

static void		actn_0x(t_frmtnfo *ph, t_pfcore *db)
{
	ph->actn = FALSE;
	pf_putstr("0x", ph, db);
}

static int		manage_xt_frmtnfo(t_frmtnfo *ph)
{
	if (ph->prec == 0 && ph->wprc == TRUE && !ph->width)
		return (0);
	if (ph->phd.imt == 0 && ph->hash && !ph->prec)
		ph->hash = FALSE;
	if (ph->hash == TRUE)
		ph->actn = TRUE;
	if (ph->algn == TRUE)
		ph->zero = FALSE;
	if (ph->width && ph->hash == FALSE)
		ph->width += ft_numlen(ph->phd.imt, 16);
	if (ph->prec && ph->width)
	{
		if (ph->prec > ph->width)
			ph->width = ph->prec;
		ph->width = ph->width - ph->len;
	}
	else if (ph->width && !ph->prec)
		ph->width = ph->width - ph->len;
	else if (ph->prec && !ph->width)
		ph->width = ph->prec - ph->len;
	return (1);
}

static void		putpad_x(t_frmtnfo *ph, t_pfcore *db)
{
	char		c;

	if (ph->zero == TRUE)
		c = '0';
	else
		c = ' ';
	ph->width = ph->width - ph->len;
	while (ph->width-- > 0)
		pf_putchar(c, db);
}

static void		printx_ndel(t_frmtnfo *ph, t_pfcore *db)
{
	char		*ostr;

	ostr = pf_itoabse(ph->phd.uimt, 16, ph);
	pf_putstr(ostr, ph, db);
	ft_strdel(&ostr);
}

int				pf_print_x(t_frmtnfo *ph, t_pfcore *db)
{
	pf_lmgmt_oux(db, ph);
	ph->len = ft_numlen(ph->phd.uimt, 16);
	if (!(manage_xt_frmtnfo(ph)))
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
