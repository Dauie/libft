/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:54:13 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/03 19:42:35 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

int			pf_print_s(attrib *ph, uiput *db)
{
	int		padlen;
	char	*phs;

	padlen = 0;
	phs = va_arg(db->ap, char *);
	if (ph->algn == TRUE)
	{
		db->tot += pf_putstr(phs);
		if (ph->width)
			pf_putpad_c(ph, db);
	}
	else
	{
		if (ph->width)
			pf_putpad_c(ph, db);
		db->tot += pf_putstr(phs);
	}
	return (0);
}
