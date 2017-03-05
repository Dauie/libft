/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 19:19:24 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/05 14:58:18 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

int			pf_print_i(attrib *ph, uiput *db)
{
	int		phi;

	phi = va_arg(db->ap, int);
	ph->len = ft_numlen(phi, 10);
	if (ph->sign == TRUE)
		ph->width -= 1;
	pf_putnbr(phi, ph, db);
	if (ph->width)
		pf_putpad_c(ph, db);
	return (0);
}
