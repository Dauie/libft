/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 15:34:02 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/04 12:59:38 by rlutt            ###   ########.fr       */
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
		db->tot += pf_putchar(phc);
		if (ph->width)
			pf_putpad_c(ph, db);
	}
	else
	{
		if (ph->width)
			pf_putpad_c(ph, db);
		db->tot += pf_putchar(phc);
	}
	return (0);
}
