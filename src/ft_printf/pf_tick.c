/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_tick.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 11:52:43 by rlutt             #+#    #+#             */
/*   Updated: 2018/06/26 10:58:04 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

void		pf_tick_algn(t_frmtnfo *ph, t_pfcore *db)
{
	ph->algn = TRUE;
	db->inx++;
}

void		pf_tick_hash(t_frmtnfo *ph, t_pfcore *db)
{
	ph->hash = TRUE;
	db->inx++;
}

void		pf_tick_sign(t_frmtnfo *ph, t_pfcore *db)
{
	ph->sign = TRUE;
	ph->actn = TRUE;
	db->inx++;
}

void		pf_tick_zero(t_frmtnfo *ph, t_pfcore *db)
{
	ph->zero = TRUE;
	db->inx++;
}

void		pf_tick_spc(t_frmtnfo *ph, t_pfcore *db)
{
	ph->spc = TRUE;
	db->inx++;
}
