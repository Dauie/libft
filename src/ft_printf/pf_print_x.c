/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/10 16:36:01 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

int			pf_print_x(attrib *ph, uiput *db)
{
	long	hold;
	unsigned long phx;

	hold = (long)va_arg(db->ap, long);
	if (ph->hash == TRUE)
		ph->actn = TRUE;
	if (hold < 0)
	{
		phx = -hold;
		ph->sign = TRUE;
	}
	else
		phx = hold;
	ph->len = ft_numlen(phx, 16);
	pf_putstr(pf_itoabse(phx, 16, ph), ph, db);
	if (ph->width)
		pf_putpad_x(ph, db);
	return (0);
}
