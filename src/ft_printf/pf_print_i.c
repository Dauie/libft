/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/10 16:35:31 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

int			pf_print_i(attrib *ph, uiput *db)
{
	long	phi;

	phi = (int)va_arg(db->ap, int);
	ph->len = ft_numlen(phi, 10);
	pf_putnbr(phi, ph, db);
	if (ph->width)
		pf_putpad_csdi(ph, db);
	return (0);
}
