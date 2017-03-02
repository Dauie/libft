/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:54:13 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/02 14:27:11 by rlutt            ###   ########.fr       */
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
			pf_putpad(ph, db);
	}
	else
	{
		if (ph->width)
			pf_putpad(ph, db);
		db->tot += pf_putstr(phs);
	}
	return (padlen);
}
