/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_cast_oux.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 18:40:51 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/03 13:24:42 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

void 		pf_lmgmt_oux(uiput *db, attrib *ph)
{
	if (ph->mod == 'l')
		ph->phd.uimt = va_arg(db->ap, unsigned long);
	else if (ph->mod == 'L')
		ph->phd.uimt = va_arg(db->ap, unsigned long long);		//not working
	else if (ph->mod == 'h')
		ph->phd.uimt = (unsigned short)va_arg(db->ap, intmax_t);
	else if (ph->mod == 'H')
		ph->phd.uimt = va_arg(db->ap, unsigned int);
	else if (ph->mod == 'z')
		ph->phd.uimt = va_arg(db->ap, unsigned long long);
	else if (ph->mod == 'j')
		ph->phd.uimt = va_arg(db->ap, uintmax_t);
	else
		ph->phd.uimt = va_arg(db->ap, unsigned int);
}
