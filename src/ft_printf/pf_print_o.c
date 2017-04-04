/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_o.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/04 11:17:29 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

static void		putpad_o(t_frmtnfo *ph, t_pfcore *db)
{
	char	c;

	c = ' ';
	if (ph->zero)
		c = '0';
	while (ph->width--)
		pf_putchar(c, db);
}

static void		printo_ndel(t_frmtnfo *ph, t_pfcore *db)
{
	char		*ostr;

	if (ph->actn == TRUE)
		pf_putchar('0', db);
	ostr = pf_itoabse(ph->phd.l, 8, ph);
	pf_putstr(ostr, ph, db);
	ft_strdel(&ostr);
}

static void		manage_owidprec(t_frmtnfo *ph)
{
	if (ph->prec && ph->width)
	{
		if (ph->prec > ph->width)
		{
			ph->actn = TRUE;
			ph->zero = TRUE;
			ph->algn = FALSE;
			ph->width = ph->prec - 1;
		}
		else if (ph->width > ph->prec)
		{
			ph->width--;
			ph->actn = TRUE;
			ph->hash = TRUE;
			ph->zero = FALSE;
		}
		ph->width = ph->width - ph->len;
	}
	else if (ph->width && !ph->prec)
		ph->width = ph->width - ph->len;
	else if (ph->prec && !ph->width)
	{
		ph->zero = TRUE;
		ph->width = ph->prec - ph->len;
	}
}

static int		manage_ot_frmtnfo(t_frmtnfo *ph)
{
	if (ph->prec == 0 && ph->wprc == TRUE &&
			!ph->width && ph->hash == FALSE)
		return (0);
	if (ph->hash == TRUE && ph->width)
	{
		ph->width--;
		ph->actn = TRUE;
	}
	if (ph->hash == TRUE && !ph->width &&
			ph->wprc == FALSE && ph->phd.uimt != 0)
		ph->actn = TRUE;
	if (ph->algn == TRUE && ph->zero == TRUE)
		ph->zero = FALSE;
	manage_owidprec(ph);
	return (1);
}

int				pf_print_o(t_frmtnfo *ph, t_pfcore *db)
{
	pf_lmgmt_oux(db, ph);
	ph->len = ft_numlen(ph->phd.l, 8);
	if (!(manage_ot_frmtnfo(ph)))
		return (0);
	if (ph->algn == FALSE)
	{
		if (ph->width)
			putpad_o(ph, db);
		printo_ndel(ph, db);
	}
	else
	{
		printo_ndel(ph, db);
		if (ph->width)
			putpad_o(ph, db);
	}
	return (1);
}
