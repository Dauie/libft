/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/09 18:49:18 by rlutt            ###   ########.fr       */
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
	pf_putstr(ft_itoabse(phx, 16), ph, db);
	if (ph->width)
		pf_putpad_c(ph, db);
	return (0);
}
