/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:55:04 by rlutt             #+#    #+#             */
/*   Updated: 2018/06/26 10:58:04 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

int			ft_printf(const char *frmt, ...)
{
	t_pfcore	db;

	init_uinput(&db);
	va_start(db.ap, frmt);
	pf_parse(frmt, &db);
	va_end(db.ap);
	return (db.tot);
}

int			pf_parse(const char *frmt, t_pfcore *db)
{
	while (frmt[db->inx])
	{
		if (frmt[db->inx] == '%' && frmt[db->inx + 1])
		{
			if (!(pf_pause_parse(frmt, db)))
				return (0);
		}
		else
		{
			ft_putchar(frmt[db->inx++]);
			db->tot++;
		}
	}
	return (1);
}

int			pf_pause_parse(const char *frmt, t_pfcore *db)
{
	t_frmtnfo	ph;

	if (frmt[db->inx] == '%')
		db->inx++;
	init_t_frmtnfo(&ph);
	ph.len = pf_phlen(frmt, db);
	ph.type = frmt[db->inx + ph.len];
	if (pf_isupper(ph.type))
		ph.upper = TRUE;
	if (ph.type == '%')
		ph.len += 1;
	pf_frmtnfo(frmt, &ph, db);
	pf_phmaster(&ph, db);
	return (1);
}

int			pf_frmtnfo(const char *frmt, t_frmtnfo *ph, t_pfcore *db)
{
	int		i;

	i = -1;
	while (++i < ph->len)
	{
		if (pf_isflag(frmt[db->inx]) == 1)
			pf_tick_algn(ph, db);
		else if (pf_isflag(frmt[db->inx]) == 2)
			pf_get_width(frmt, ph, db);
		else if (pf_isflag(frmt[db->inx]) == 3)
			pf_tick_hash(ph, db);
		else if (pf_isflag(frmt[db->inx]) == 4)
			pf_tick_sign(ph, db);
		else if (pf_isflag(frmt[db->inx]) == 5)
			pf_tick_zero(ph, db);
		else if (pf_isflag(frmt[db->inx]) == 6)
			pf_tick_spc(ph, db);
		else if (pf_ismod_pre(frmt, db))
			ph->mod = pf_parse_mod(frmt, db, ph);
		else if (pf_isflag(frmt[db->inx]) == 7)
			pf_get_prec(frmt, ph, db);
	}
	db->inx++;
	return (1);
}

int			pf_phmaster(t_frmtnfo *ph, t_pfcore *db)
{
	if (ph->type == '%')
		pf_print_perc(ph, db);
	else if (ph->type == 's' || ph->type == 'S')
		pf_print_s(ph, db);
	else if (ph->type == 'c' || ph->type == 'C')
		pf_print_c(ph, db);
	else if (ph->type == 'i' || ph->type == 'd' || ph->type == 'D')
		pf_print_i(ph, db);
	else if (ph->type == 'o' || ph->type == 'O')
		pf_print_o(ph, db);
	else if (ph->type == 'x' || ph->type == 'X')
		pf_print_x(ph, db);
	else if (ph->type == 'p')
		pf_print_p(ph, db);
	else if (ph->type == 'u' || ph->type == 'U')
		pf_print_i(ph, db);
	return (1);
}
