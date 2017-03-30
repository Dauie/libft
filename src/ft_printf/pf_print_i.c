/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/30 13:35:41 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

//look at your casting.

static int 	manage_iattrib(attrib *ph)
{
	if (ph->prec == 0 && ph->wprc == TRUE && !ph->width)
		return (0);
	if (ph->sign == TRUE)
		ph->width--;
	if (ph->prec && ph->width)
	{
		if (ph->prec > ph->width)
		{
			ph->zero = TRUE;
			ph->width = ph->prec;
		}
		else if (ph->width > ph->prec)
		{
			ph->hash = TRUE;
			ph->width--;
		}
		ph->width = ph->width - ph->len;
	}
	else if (ph->width && !ph->prec)
	{
		if (ph->algn == TRUE)
			ph->zero = FALSE;
		ph->width = ph->width - ph->len;
	}
	else if (ph->prec && !ph->width)
	{
		ph->zero = TRUE;
		ph->width = ph->prec - ph->len;
	}
	return (1);
}

static void 	putpad_i(attrib *ph, uiput *db)
{
	char	c;

	c = ' ';
	if (ph->zero == TRUE && ph->phd.uimt != 0)
		c = '0';
	if (ph->actn == TRUE)
	{
		if (ph->sign == TRUE && ph->wneg == FALSE)
			pf_putchar('+', ph, db);
		else if (ph->wneg == TRUE && ph->actn == TRUE)
			pf_putchar('-', ph, db);
		ph->actn = FALSE;
	}
	while (ph->width-- > 0)
		pf_putchar(c, ph, db);
}

void handel_isign(attrib *ph, uiput *db)
{
	if (ph->actn == TRUE)
	{
		if (ph->sign == TRUE && ph->wneg == FALSE)
			pf_putchar('+', ph, db);
		else if (ph->wneg == TRUE && ph->actn == TRUE)
			pf_putchar('-', ph, db);
		ph->actn = FALSE;
	}
	if (ph->hash == TRUE)
	{
		pf_putchar('0', ph, db);
		ph->hash = FALSE;
	}
}


int			pf_putnbr(uintmax_t n, attrib *ph, uiput *db)
{
	uintmax_t	tmp;

	tmp = n;
	if (ph->actn == TRUE || ph->hash == TRUE)
		handel_isign(ph, db);
	if (ph->width && ph->algn == FALSE)
		putpad_i(ph, db);
	if (tmp > 9)
	{
		pf_putnbr(tmp / 10, ph, db);
		pf_putnbr(tmp % 10, ph, db);
	}
	else
		pf_putchar(tmp + '0', ph, db);
	return (1);
}

int				pf_print_i(attrib *ph, uiput *db)
{
	pf_lmgmt_id(db, ph);
	ph->len = ft_numlen(ph->phd.uimt, 10);
	if (!(manage_iattrib(ph)))
		return (0);
	if (ph->algn == TRUE)
	{
		pf_putnbr(ph->phd.uimt, ph, db);
		if (ph->width)
			putpad_i(ph, db);
	}
	else
	{
		if (ph->spc == TRUE && ph->width == 0)
			pf_putchar(' ', ph, db);
		if (ph->sign == TRUE)
			ph->actn = TRUE;
		if (ph->width)
			putpad_i(ph, db);
		pf_putnbr(ph->phd.uimt, ph, db);
	}
	return (1);
}
