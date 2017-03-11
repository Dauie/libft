/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 15:34:02 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/10 16:35:26 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../incl/printf.h"

int			pf_print_c(attrib *ph, uiput *db)
{
	char	phc;

	ph->len = 1;
	phc = (char)va_arg(db->ap, int);
	if (ph->algn == TRUE)
	{
		pf_putchar(phc, ph, db);
		if (ph->width)
			pf_putpad_csdi(ph, db);
	}
	else
	{
		if (ph->width)
			pf_putpad_csdi(ph, db);
		pf_putchar(phc, ph, db);
	}
	return (0);
}
