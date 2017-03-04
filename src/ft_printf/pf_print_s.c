/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:54:13 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/04 12:59:50 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

int			pf_print_s(attrib *ph, uiput *db)
{
	char	*phs;
	
	phs = va_arg(db->ap, char *);
	ph->len = ft_strlen(phs);
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
