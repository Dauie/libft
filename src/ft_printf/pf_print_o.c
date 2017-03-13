/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_o.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/13 14:20:10 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

int				pf_print_o(attrib *ph, uiput *db)
{
	if (ph->mod)
		pf_manage_lmod(db, ph);
	else
		ph->phd.l = (long)va_arg(db->ap, long);
	if (ph->phd.l < 0)
	{
		ph->phd.l = -ph->phd.l;
		ph->sign = TRUE;
	}
	ph->len = ft_numlen(ph->phd.l, 8);
	if (ph->hash == TRUE)
		ph->actn = TRUE;
	pf_putpad_o(ph, db);
	pf_putstr(pf_itoabse(ph->phd.l, 8, ph), ph, db);
	return (0);
}

void 		pf_putpad_o(attrib *ph, uiput *db)
{
	ph->width++;
	ph->width = ph->width - ph->len;
	while (ph->width-- > 1)
		pf_putchar(' ', ph, db);
	if (ph->hash == TRUE)
		pf_putchar('0', ph, db);
	ph->width = 0;
}
