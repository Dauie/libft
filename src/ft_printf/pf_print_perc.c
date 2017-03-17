/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_perc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:54:13 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/16 18:59:28 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

static void 	putpad_perc(attrib *ph, uiput *db);

int			pf_print_perc(attrib *ph, uiput *db)
{
	if (ph->algn == TRUE)
	{
		pf_putchar('%', ph, db);
		if (ph->width)
			putpad_perc(ph, db);
	}
	else
	{
		if (ph->width)
			putpad_perc(ph, db);
		pf_putchar('%', ph, db);
	}
	return (0);
}

static void 	putpad_perc(attrib *ph, uiput *db)
{
	ph->len = 1;
	ph->width = ph->width - ph->len;
	while (ph->width-- > 0)
		pf_putchar(' ', ph, db);
}
