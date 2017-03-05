/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/04 18:25:29 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

int			pf_print_i(attrib *ph, uiput *db)
{
	int		phi;

	phi = va_arg(db->ap, int);
	ph->len = ft_numlen(phi, 10);
	if (ph->algn == TRUE)
	{
		pf_putnbr(phi, ph, db);
		if (ph->width)
			pf_putpad_c(ph, db);
	}
	else
		pf_putnbr(phi, ph, db);
	return (0);
}
