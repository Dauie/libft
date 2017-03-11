/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_perc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:54:13 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/10 16:35:52 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

int			pf_print_perc(attrib *ph, uiput *db)
{
	ph->len = 1;
	if (ph->algn == TRUE)
	{
		pf_putchar('%', ph, db);
		if (ph->width)
			pf_putpad_csdi(ph, db);
	}
	else
	{
		if (ph->width)
			pf_putpad_csdi(ph, db);
		pf_putchar('%', ph, db);
	}
	return (0);
}
