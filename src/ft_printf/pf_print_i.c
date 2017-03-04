/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/04 12:59:41 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

int			pf_print_i(attrib *ph, uiput *db)
{
	int		phi;

	phi = va_arg(db->ap, int);
	ph->len = ft_numlen(phi, 10);
	if (ph->algn == TRUE)
	{
		if (ph->sign == TRUE && phi > 0)
			db->tot += pf_putchar('+');
		db->tot += pf_putnbr(phi);
		if (ph->width)
			pf_putpad_i(ph, db);
	}
	else
	{
		if (ph->width)
			pf_putpad_i(ph, db);
		if (ph->sign == TRUE && phi > 0)
			db->tot += pf_putchar('+');
		db->tot += pf_putnbr(phi);
	}
	return (0);
}
