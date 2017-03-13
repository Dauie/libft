/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/11 18:57:53 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

int				pf_print_x(attrib *ph, uiput *db)
{
	long		hold;
	uintmax_t 	phx;

	hold = (long)va_arg(db->ap, long);
	if (hold < 0)
	{
		phx = -hold;
		ph->sign = TRUE;
	}
	else
		phx = hold;
	ph->len = ft_numlen(phx, 16);
	if (ph->hash == TRUE)
		ph->actn = TRUE;
	pf_putpad_x(ph, db);
	pf_putstr(pf_itoabse(phx, 16, ph), ph, db);
	return (0);
}

void 		pf_putpad_x(attrib *ph, uiput *db)
{
	if (ph->hash == TRUE)
		ph->width--;
	else
		ph->width++;
	ph->width = ph->width - ph->len;
	while (ph->width-- > 1)
		pf_putchar(' ', ph, db);
	if (ph->hash == TRUE)
		pf_putstr("0x", ph, db);
	else
		pf_putchar(' ', ph, db);
}
