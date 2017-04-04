/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_perc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:54:13 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/04 11:19:13 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

static void		putpad_perc(t_frmtnfo *ph, t_pfcore *db)
{
	ph->len = 1;
	ph->width = ph->width - ph->len;
	while (ph->width-- > 0)
		pf_putchar(' ', db);
}

int				pf_print_perc(t_frmtnfo *ph, t_pfcore *db)
{
	if (ph->algn == TRUE)
	{
		pf_putchar('%', db);
		if (ph->width)
			putpad_perc(ph, db);
	}
	else
	{
		if (ph->width)
			putpad_perc(ph, db);
		pf_putchar('%', db);
	}
	return (0);
}
