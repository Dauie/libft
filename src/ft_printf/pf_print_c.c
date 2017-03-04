/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 15:34:02 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/03 19:42:58 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../../incl/printf.h"

int			pf_print_c(attrib *ph, uiput *db)
{
	int		padlen;
	char	phc;

	padlen = 0;
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
