/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_initstructs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:41:25 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/22 13:00:50 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

void 		init_uinput(uiput *db)
{
	db->inx = 0;
	db->tot = 0;
}

void 		init_attrib(attrib *ipg)
{
	ipg->type = 0;
	ipg->mod = 0;
	ipg->phd.i = 0;
	ipg->actn = FALSE;
	ipg->upper =  FALSE;
	ipg->algn = FALSE;
	ipg->sign = FALSE;
	ipg->hash = FALSE;
	ipg->zero = FALSE;
	ipg->spc = FALSE;
	ipg->wneg = FALSE;
	ipg->prec = 0;
	ipg->width = 0;
	ipg->len = 0;
}
