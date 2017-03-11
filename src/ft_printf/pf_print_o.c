/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_o.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/10 16:55:48 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

int			pf_print_o(attrib *ph, uiput *db)
{
	long	hold;
	unsigned long pho;

	hold = (long)va_arg(db->ap, long);
	if (hold < 0)
	{
		pho = -hold;
		ph->sign = TRUE;
	}
	else
		pho = hold;
	ph->actn = TRUE;
	ph->len = ft_numlen(pho, 8);
	if (ph->width)
		pf_putpad_x(ph, db);
	pf_putstr(pf_itoabse(pho, 8, ph), ph, db);
	return (0);
}
