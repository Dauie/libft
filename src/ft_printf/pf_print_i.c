/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2018/06/26 10:58:04 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

static void		handel_isign(t_frmtnfo *ph, t_pfcore *db)
{
	if (ph->type == 'd' || ph->type == 'i' || ph->type == 'D')
	{
		if (ph->sign == TRUE && ph->wneg == FALSE)
			pf_putchar('+', db);
		if (ph->wneg == TRUE)
			pf_putchar('-', db);
		ph->actn = FALSE;
	}
}

static void		handel_ihash(t_frmtnfo *ph, t_pfcore *db)
{
	pf_putchar('0', db);
	ph->hash = FALSE;
}

static int		manage_it_frmtnfo(t_frmtnfo *ph)
{
	manage_isign(ph);
	manage_iwidprec(ph);
	if (ph->prec == 0 && ph->wprc == TRUE &&
		!ph->width && ph->phd.uimt == 0)
		return (0);
	if (ph->width && ph->prec)
	{
		ph->spc = FALSE;
		ph->zero = FALSE;
	}
	if (ph->width && !ph->prec)
	{
		if (ph->algn == TRUE)
			ph->zero = FALSE;
	}
	else if (ph->prec && !ph->width)
		ph->zero = TRUE;
	return (1);
}

static void		pf_print_irev(t_frmtnfo *ph, t_pfcore *db)
{
	if (ph->spc == TRUE && ph->wneg == FALSE && ph->sign == FALSE)
	{
		if (ph->type == 'd' || ph->type == 'i' || ph->type == 'D')
		{
			ph->width--;
			pf_putchar(' ', db);
		}
	}
	if (ph->actn == TRUE && ph->zero == TRUE && ph->width)
		handel_isign(ph, db);
	if (ph->width)
		putpad_i(ph, db);
	if (ph->actn == TRUE)
		handel_isign(ph, db);
	if (ph->hash == TRUE)
		handel_ihash(ph, db);
	pf_putnbr(ph->phd.uimt, ph, db);
}

int				pf_print_i(t_frmtnfo *ph, t_pfcore *db)
{
	if (ph->type == 'd' || ph->type == 'i' || ph->type == 'D')
		pf_lmgmt_id(db, ph);
	else
		pf_lmgmt_oux(db, ph);
	ph->len = pf_inumlen(ph->phd.uimt, 10);
	if (!(manage_it_frmtnfo(ph)))
		return (0);
	if (ph->algn == TRUE)
	{
		if (ph->hash == TRUE)
			handel_ihash(ph, db);
		if (ph->actn == TRUE)
			handel_isign(ph, db);
		pf_putnbr(ph->phd.uimt, ph, db);
		if (ph->width)
			putpad_i(ph, db);
	}
	else
		pf_print_irev(ph, db);
	return (1);
}
