/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putpad_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:54:40 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/10 19:17:19 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

void 		pf_putpad_csdi(attrib *ph, uiput *db)
{
	int		len;
	char	c;

	len = ph->width - ph->len;
	if (pf_isoxdi(ph->type))
			len--;
	if (ph->zero == TRUE || pf_isoxdi(ph->type))
		c = '0';
	else
		c = ' ';
	while (len-- > 0)
		pf_putchar(c, ph, db);
	ph->width = 0;
}

void 		pf_putpad_x(attrib *ph, uiput *db)
{
	int		len;
	char	c;
	if (ph->zero == TRUE)
		c = '0';
	else
		c = ' ';
	len = ph->width - ph->len;
	if (pf_isoxdi(ph->type))
			len--;
	while (len-- > 1)
		pf_putchar(c, ph, db);
	if (ph->zero == TRUE)
		pf_putchar('0', ph, db);
	else
		pf_putchar(' ', ph, db);

	ph->width = 0;
}
