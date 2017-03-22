/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 15:34:02 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/18 14:52:34 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../incl/printf.h"

static void 	putpad_c(attrib *ph, uiput *db);

int			pf_print_c(attrib *ph, uiput *db)
{
	char	phc;

	phc = (char)va_arg(db->ap, int);
	if (ph->algn == TRUE)
	{
		pf_putchar(phc, ph, db);
		if (ph->width)
			putpad_c(ph, db);
	}
	else
	{
		if (ph->width)
			putpad_c(ph, db);
		pf_putchar(phc, ph, db);
	}
	return (0);
}

static void 	putpad_c(attrib *ph, uiput *db)
{
	char	c;

	ph->len = 1;
	ph->width = ph->width - ph->len;
	c = ' ';
	while (ph->width-- > 0)
		pf_putchar(c, ph, db);
}
