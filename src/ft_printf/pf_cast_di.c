/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_cast_di.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 18:40:44 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/27 11:48:41 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

void 		pf_lmgmt_id(uiput *db, attrib *ph)
{
	if (ph->mod == 'l')
		ph->phd.imt = va_arg(db->ap, long);
	else if (ph->mod == 'L')
		ph->phd.imt = va_arg(db->ap, long long);
	else if (ph->mod == 'h')
		ph->phd.imt = (short)va_arg(db->ap, int);
	else if (ph->mod == 'H')
		ph->phd.imt = va_arg(db->ap, size_t);
	else if (ph->mod == 'z')
		ph->phd.imt = va_arg(db->ap, size_t);
	else if (ph->mod == 'j')
		ph->phd.imt = va_arg(db->ap, intmax_t);
}
