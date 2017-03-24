/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_o.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/24 15:32:39 by rlutt            ###   ########.fr       */
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
	c = '0';
	pf_putchar(c, ph, db);
}

static void 	printo_ndel(attrib *ph, uiput *db)
{
	char		*ostr;


	if (ph->actn == TRUE)
		handel_hasho(ph, db);
	ostr = pf_itoabse(ph->phd.l, 8, ph);
	pf_putstr(ostr, ph, db);
	ft_strdel(&ostr);
}


// *need - DONT FUCKING TOUCH IT
static int 		manage_oattrib(attrib *ph)
{
	if (ph->prec == 0 && ph->wprc == TRUE && !ph->width)
		return (0);
	if (ph->hash == TRUE && ph->width)								//need
	{
		ph->width--;
		ph->actn = TRUE;
	}
	if (ph->algn && ph->zero == TRUE)						//need
		ph->zero = FALSE;
	if (ph->prec && ph->width)
	{
		if (ph->prec > ph->width)							//need
		{
			ph->actn = TRUE;
			ph->zero = TRUE;
			ph->algn = FALSE;
			ph->width = ph->prec;
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
		ph->width = ph->prec - ph->len;
	return (1);
}

int				pf_print_o(attrib *ph, uiput *db)
{
	if (ph->mod)
		pf_lmgmt_oux(db, ph);
	else
		ph->phd.imt = va_arg(db->ap, intmax_t);
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
	return (1);
}
