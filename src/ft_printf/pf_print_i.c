/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/03 19:54:27 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

int			pf_print_i(attrib *ph, uiput *db)
{
	long	phi;

	phi = (int)va_arg(db->ap, int);
	if (ph->algn == TRUE)
	{
		db->tot += pf_putnbr(phi);
		if (ph->width)
			pf_putpad_i(ph, db);
	}
	else
	{
		if (ph->width)
			pf_putpad_i(ph, db);
		db->tot += pf_putnbr(phi);
	}
	return (0);
}
