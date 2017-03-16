/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_o.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/15 15:07:05 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

int				pf_print_o(attrib *ph, uiput *db)
{
	if (ph->mod)
		pf_lmgmt_oux(db, ph);
	else
		ph->phd.l = (long)va_arg(db->ap, long);
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
	if (ph->actn == TRUE)
		pf_putchar('0', ph, db);
	ph->width = 0;
}
