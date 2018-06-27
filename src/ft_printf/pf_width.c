/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_width.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:53:23 by rlutt             #+#    #+#             */
/*   Updated: 2018/06/26 10:58:04 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

void		pf_get_width(const char *frmt, t_frmtnfo *ph, t_pfcore *db)
{
	if (!(ft_isdigit(frmt[db->inx])))
		db->inx++;
	ph->width = ft_atoi((char *)&frmt[db->inx]);
	db->inx += ft_numlen(ph->width, 10);
}

int			pf_iswidth(int c)
{
	if (c >= '1' && c <= '9')
		return (1);
	else
		return (0);
}

void		pf_get_prec(const char *frmt, t_frmtnfo *ph, t_pfcore *db)
{
	ph->wprc = TRUE;
	if (frmt[db->inx] == '.')
		db->inx++;
	if (ft_isdigit(frmt[db->inx]))
	{
		ph->prec = ft_atoi((char *)&frmt[db->inx]);
		db->inx += ft_numlen(ph->prec, 10);
	}
}

int			pf_phlen(const char *frmt, t_pfcore *db)
{
	char	*strt;
	char	*flag;

	strt = (char*)&frmt[db->inx];
	flag = pf_typechr((char *)&frmt[db->inx]);
	return (flag - strt);
}
