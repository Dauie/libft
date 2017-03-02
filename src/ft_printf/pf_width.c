/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:53:23 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/02 11:40:22 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

void 		pf_get_width(const char *frmt, attrib *ph, uiput *db)
{
	ph->width = ft_atoi((char *)&frmt[db->inx]);
	db->inx += ft_numlen(ph->width, 10);
}

int			pf_phlen(const char *frmt, uiput *db)
{
	char 	*strt;
	char 	*flag;

	strt = (char*)&frmt[db->inx];
	flag = pf_typechr((char *)&frmt[db->inx]);
	return (flag - strt);
}
