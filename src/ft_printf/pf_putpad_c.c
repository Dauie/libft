/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putpad_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:54:40 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/11 16:54:45 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

void 		pf_putpad_csdi(attrib *ph, uiput *db)
{
	char	c;

	ph->width = ph->width - ph->len;
	if (ph->zero == TRUE)
		c = '0';
	else
		c = ' ';
	while (ph->width-- > 0)
		pf_putchar(c, ph, db);
}

void 		pf_putpad_xo(attrib *ph, uiput *db)
{
	ph->width++;
	ph->width = ph->width - ph->len;
	while (ph->width-- > 1)
		pf_putchar(' ', ph, db);
	if (ph->hash == TRUE)
		pf_putchar('0', ph, db);
	else
		pf_putchar(' ', ph, db);
	ph->width = 0;
}
