/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_cast_di.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/22 18:40:44 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/04 10:55:43 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

void		pf_lmgmt_id(t_pfcore *db, t_frmtnfo *ph)
{
	if (ph->mod == 'l' || ph->type == 'D')
		ph->phd.l = va_arg(db->ap, intmax_t);
	else if (ph->mod == 'L')
		ph->phd.imt = va_arg(db->ap, intmax_t);
	else if (ph->mod == 'h')
		ph->phd.imt = (short)va_arg(db->ap, intmax_t);
	else if (ph->mod == 'H')
		ph->phd.imt = (char)va_arg(db->ap, size_t);
	else if (ph->mod == 'z')
		ph->phd.imt = va_arg(db->ap, size_t);
	else if (ph->mod == 'j')
		ph->phd.imt = va_arg(db->ap, intmax_t);
	else
		ph->phd.imt = va_arg(db->ap, int);
	if (ph->phd.imt < 0)
	{
		ph->phd.uimt = ph->phd.imt * -1;
		ph->wneg = TRUE;
		ph->actn = TRUE;
	}
}
