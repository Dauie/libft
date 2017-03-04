/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:54:13 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/04 12:59:46 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

int			pf_print_perc(attrib *ph, uiput *db)
{
	ph->len = 1;
	if (ph->algn == TRUE)
	{
		db->tot += pf_putchar('%');
		if (ph->width)
			pf_putpad_c(ph, db);
	}
	else
	{
		if (ph->width)
			pf_putpad_c(ph, db);
		db->tot += pf_putchar('%');
	}
	return (0);
}
