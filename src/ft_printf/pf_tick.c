/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_tick.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 11:52:43 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/29 18:30:04 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

void 		pf_tick_algn(attrib *ph, uiput *db)
{
	ph->algn = TRUE;
	db->inx++;
}

void 		pf_tick_hash(attrib *ph, uiput *db)
{
	ph->hash = TRUE;
	db->inx++;
}

void 		pf_tick_sign(attrib *ph, uiput *db)
{
	ph->sign = TRUE;
	db->inx++;
}

void 		pf_tick_zero(attrib *ph, uiput *db)
{
	ph->zero = TRUE;
	db->inx++;
}

void 		pf_tick_spc(attrib *ph, uiput *db)
{
	ph->spc = TRUE;
	db->inx++;
}
