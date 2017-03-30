/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:55:04 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/30 13:34:35 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

// have all functions checked to verify that they can take the maximum data type.

int 		ft_printf(const char *frmt, ...)
{
	uiput	db;

	init_uinput(&db);
	va_start(db.ap, frmt);
	pf_parse(frmt, &db);
	va_end(db.ap);
	return (db.tot);
}

int			pf_parse(const char *frmt, uiput *db)
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

/*%[flags][width][.precision][length]type*/
int			pf_pause_parse(const char *frmt, uiput *db)
{
	attrib	ph;

	if (frmt[db->inx] == '%')
		db->inx++;
	init_attrib(&ph);
	ph.len = pf_phlen(frmt, db);
	ph.type = frmt[db->inx + ph.len];
	if (pf_isupper(ph.type))
		ph.upper = TRUE;
	pf_get_attrib(frmt, &ph, db);
	pf_phmaster(&ph, db);
	return (1);
}

int			pf_get_attrib(const char *frmt, attrib *ph, uiput *db)
{
	int		i;

	i = -1;
	if(ph->type == '%')
		ph->len += 1;
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

int			pf_phmaster(attrib *ph, uiput *db)
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
	/*else if (ph->type == 'p')
		return (pf_putvoid(ph, db));*/
	else if (ph->type == 'u' || ph->type == 'U')
		pf_print_u(ph, db);
	return (1);
}
