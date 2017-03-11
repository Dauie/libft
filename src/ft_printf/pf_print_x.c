/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/11 10:37:19 by rlutt            ###   ########.fr       */
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
	if (ph->width)
		pf_putpad_xo(ph, db);
	pf_putstr(pf_itoabse(phx, 16, ph), ph, db);
	return (0);
}
