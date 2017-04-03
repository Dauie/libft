/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:54:13 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/03 11:47:19 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"
#include <string.h>

static void 	putpad_s(attrib *ph, uiput *db)
{
	char	c;

	if (ph->width)
		ph->width = ph->width - ph->len;
	if (ph->zero == TRUE)
		c = '0';
	else
		c = ' ';
	while (ph->width-- > 0)
		pf_putchar(c, db);
	ph->width = 0;
}

int			pf_print_s(attrib *ph, uiput *db)
{
	char	*phs;

	if (!(phs = va_arg(db->ap, char *)))
	{
		pf_putstr("(null)", ph, db);
		return(0);
	}
	ph->len = ft_strlen(phs);
	if (ph->prec)
		pf_make_precise(phs, ph);
	if (ph->algn == TRUE)
	{
		pf_putstr(phs, ph, db);
		if (ph->width)
			putpad_s(ph, db);
	}
	else
	{
		if (ph->width)
			putpad_s(ph, db);
		pf_putstr(phs, ph, db);
	}
	return (0);
}
