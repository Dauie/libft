/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_ihelp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 10:39:56 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/04 10:56:38 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

void		manage_iwidprec(attrib *ph)
{
	if (ph->width && ph->prec)
	{
		ph->zero = FALSE;
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

void		manage_isign(attrib *ph)
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

size_t		pf_inumlen(uintmax_t nb, int bse)
{
	size_t		i;

	i = 1;
	while (nb /= bse)
		i++;
	return (i);
}

void		putpad_i(attrib *ph, uiput *db)
{
	char	c;

	c = ' ';
	if (ph->zero == TRUE && ph->phd.uimt != 0)
		c = '0';
	while (ph->width-- > 0)
		pf_putchar(c, db);
}
