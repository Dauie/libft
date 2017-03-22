/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_o.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/21 17:14:20 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

static void 	putpad_o(attrib *ph, uiput *db)
{
	char	c;

	c = ' ';
	if (ph->zero)
		c = '0';
	while (ph->width--)
		pf_putchar(c, ph, db);
}

static void 	handel_hasho(attrib *ph, uiput *db)
{
	int c;
	if (ph->algn == TRUE || (ph->zero == TRUE && ph->algn == FALSE ))
		c = '0';
	else
		c = ' ';
	if (ph->hash)
		pf_putchar(c, ph, db);
}

static void 	printo_ndel(attrib *ph, uiput *db)
{
	char		*ostr;

	if (ph->hash == TRUE)
		handel_hasho(ph, db);
	ostr = pf_itoabse(ph->phd.l, 8, ph);
	pf_putstr(ostr, ph, db);
	ft_strdel(&ostr);
}


// need (DONT FUCKING TOUCH IT)
static void 	manage_oattrib(attrib *ph)
{
	if (ph->hash && ph->width)								//need
	{
		ph->width--;
		ph->actn = TRUE;
	}
	if (ph->algn)											//need
		ph->zero = FALSE;
	if (ph->prec && ph->width)
	{
		if (ph->prec > ph->width)							//need
		{
			ph->zero = TRUE;
			ph->algn = FALSE;
			ph->width = ph->prec;
		}
		else if (ph->width > ph->prec && ph->zero == FALSE) //need
			ph->zero = TRUE;
		ph->width = ph->width - ph->len;
	}
	else if (ph->width && !ph->prec)
		ph->width = ph->width - ph->len;
	else if (ph->prec && !ph->width)
		ph->width = ph->prec - ph->len;
	ph->prec = 0;
}

int				pf_print_o(attrib *ph, uiput *db)
{
	if (ph->mod)
		pf_lmgmt_oux(db, ph);
	else
		ph->phd.l = (long)va_arg(db->ap, long);
	ph->len = ft_numlen(ph->phd.l, 8);
	manage_oattrib(ph);
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
	return (0);
}
