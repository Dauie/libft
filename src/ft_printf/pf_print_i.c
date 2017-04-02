/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/02 13:32:09 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"


static void manage_widprec(attrib *ph)
{
	if (ph->width && ph->prec)
	{
		if (ph->prec > ph->len)
			ph->prec = ph->prec - ph->len;
		else
			ph->prec = 0;
		if (ph->width > ph->prec + ph->len)
			ph->width = ph->width - (ph->prec + ph->len);
		else
			ph->width = 0;
	}
	else if (ph->prec && !ph->width)
	{
		if (ph->prec > ph->len)
			ph->prec = ph->prec - ph->len;
		else
			ph->prec = 0;
	}
	else if (ph->width && !ph->prec)
		ph->width = ph->width - ph->len;
}

static void 	manage_sign(attrib *ph)
{
	if (ph->width && ph->prec)
	{
		if (ph->sign == TRUE || ph->wneg == TRUE)
			ph->width--;
	}
	else if (ph->width && !ph->prec)
	{
		if (ph->sign == TRUE || ph->wneg == TRUE)
			ph->width--;
	}
}

static size_t		pf_inumlen(uintmax_t nb, int bse)
{
	size_t		i;

	i = 1;
	while (nb /= bse)
		i++;
	return (i);
}
static void 	putpad_i(attrib *ph, uiput *db)
{
	char	c;

	c = ' ';
	if (ph->zero == TRUE && ph->phd.uimt != 0)
		c = '0';
	while (ph->width-- > 0)
		pf_putchar(c, db);
}

static void 	putprec(attrib *ph, uiput *db)
{
	while (ph->prec-- > 0)
		pf_putchar('0', db);
}

static void handel_isign(attrib *ph, uiput *db)
{
	if (ph->sign == TRUE && ph->wneg == FALSE)
		pf_putchar('+', db);
	if (ph->wneg == TRUE)
		pf_putchar('-', db);
	ph->actn = FALSE;
}

static void handel_ihash(attrib *ph, uiput *db)
{
		pf_putchar('0', db);
		ph->hash = FALSE;
}

int			pf_putnbr(uintmax_t n, attrib *ph, uiput *db)
{
	uintmax_t	tmp;

	tmp = n;
	if (ph->prec)
		putprec(ph, db);
	if (tmp == 0 && ph->prec == 0 && ph->wprc == TRUE)
	{
		pf_putchar(' ', db);
		return (1);
	}
	if (tmp > 9)
	{
		pf_putnbr(tmp / 10, ph, db);
		pf_putnbr(tmp % 10, ph, db);
	}
	else
		pf_putchar(tmp + '0', db);
	return (1);
}

static int 	manage_iattrib(attrib *ph)
{
	manage_sign(ph);
	manage_widprec(ph);
	if (ph->prec == 0 && ph->wprc == TRUE && !ph->width && ph->phd.uimt == 0)
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

int				pf_print_i(attrib *ph, uiput *db)			// you fucked up your numlen.
{
	pf_lmgmt_id(db, ph);
	ph->len = pf_inumlen(ph->phd.uimt, 10);
	if (!(manage_iattrib(ph)))
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
	{
		if (ph->spc == TRUE && ph->wneg == FALSE && ph->sign == FALSE)
			pf_putchar(' ', db);
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
	return (1);
}
