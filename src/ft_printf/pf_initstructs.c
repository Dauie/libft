/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_initstructs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:41:25 by rlutt             #+#    #+#             */
/*   Updated: 2018/06/26 10:58:04 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

void		init_uinput(t_pfcore *db)
{
	db->inx = 0;
	db->tot = 0;
}

void		init_t_frmtnfo(t_frmtnfo *ipg)
{
	ipg->type = 0;
	ipg->mod = 0;
	ipg->phd.i = 0;
	ipg->actn = FALSE;
	ipg->upper = FALSE;
	ipg->algn = FALSE;
	ipg->sign = FALSE;
	ipg->hash = FALSE;
	ipg->zero = FALSE;
	ipg->spc = FALSE;
	ipg->wneg = FALSE;
	ipg->wprc = FALSE;
	ipg->prec = 0;
	ipg->width = 0;
	ipg->len = 0;
}
