/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:53:23 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/13 14:59:58 by rlutt            ###   ########.fr       */
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

void 		pf_manage_lmod(uiput *db, attrib *ph)
{
	if (ph->mod == 'l')
		ph->phd.l = (long)va_arg(db->ap, intmax_t);
	else if (ph->mod == 'L')
		ph->phd.ll = (long long)va_arg(db->ap, intmax_t);
	else if (ph->mod == 'h')
		ph->phd.h = (int)va_arg(db->ap, int);
	else if (ph->mod == 'H')
		ph->phd.hh = (int)va_arg(db->ap, int);
	else if (ph->mod == 'z')
		ph->phd.z = (size_t)va_arg(db->ap, intmax_t);
	else if (ph->mod == 'j')
		ph->phd.j = (intmax_t)va_arg(db->ap, intmax_t);
}
