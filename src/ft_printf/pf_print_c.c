/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 15:34:02 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/04 11:09:39 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

static void		putpad_c(t_frmtnfo *ph, t_pfcore *db)
{
	char		c;

	ph->len = 1;
	ph->width = ph->width - ph->len;
	c = ' ';
	while (ph->width-- > 0)
		pf_putchar(c, db);
}

int				pf_print_c(t_frmtnfo *ph, t_pfcore *db)
{
	char		phc;

	phc = (char)va_arg(db->ap, int);
	if (ph->algn == TRUE)
	{
		pf_putchar(phc, db);
		if (ph->width)
			putpad_c(ph, db);
	}
	else
	{
		if (ph->width)
			putpad_c(ph, db);
		pf_putchar(phc, db);
	}
	return (0);
}
