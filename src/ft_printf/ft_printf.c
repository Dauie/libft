/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:55:04 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/05 14:54:11 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

int 		ft_printf(const char *frmt, ...)
{
	uiput	db;

	init_uinput(&db);
	va_start(db.ap, frmt);
	pf_parse(frmt, &db);
	va_end(db.ap);
	return (db.tot);
}

void		pf_parse(const char *frmt, uiput *db)
{
	while (frmt[++db->inx])
	{
		if (frmt[db->inx] == '%')
			pf_pause_parse(frmt, db);
		else
		{
			ft_putchar(frmt[db->inx]);
			db->tot++;
		}
	}
}

/*%[flags][width][.precision][length]type*/
int			pf_pause_parse(const char *frmt, uiput *db)
{
	attrib	ph;

	db->inx++;
	init_attrib(&ph);
	ph.len = pf_phlen(frmt, db);
	ph.type = frmt[db->inx + ph.len];
	pf_get_attrib(frmt, &ph, db);
	pf_phmaster(&ph, db);
	return (0);
}

void		pf_get_attrib(const char *frmt, attrib *ph, uiput *db)
{
	int		i;

	i = -1;
	if (pf_isupper(ph->type))
		ph->upper = TRUE;
	while (++i < ph->len)
	{
		if (pf_isflag(frmt[db->inx]) == 1)
			ph->algn = TRUE;
		else if (pf_isflag(frmt[db->inx]) == 2)
			pf_get_width(frmt, ph, db);
		else if (pf_isflag(frmt[db->inx]) == 3)
			ph->hash = TRUE;
		else if (pf_isflag(frmt[db->inx]) == 4)
			ph->sign = TRUE;
		else if (pf_isflag(frmt[db->inx]) == 5)
			ph->zero = TRUE;
		else if (pf_isflag(frmt[db->inx]) == 6)
			ph->spc = TRUE;
		db->inx++;
	}
}

int			pf_phmaster(attrib *ph, uiput *db)
{
	if (ph->type == '%')
		return (pf_print_perc(ph, db));
	else if (ph->type == 's' || ph->type == 'S')
		return (pf_print_s(ph, db));
	else if (ph->type == 'c' || ph->type == 'C')
		return (pf_print_c(ph, db));
	else if (ph->type == 'i' || ph->type == 'd' || ph->type == 'D')
		return (pf_print_i(ph, db));
	/*else if (ph->type == 'o' || ph->type == 'O')
		return (pf_putoctal(ph, db));
	else if (ph->type == 'x' || ph->type == 'X')
		return (pf_puthex(ph, db));
		else if (ph->type == 'p')
		return (pf_putvoid(ph, db));
	else if (ph->type == 'u' || ph->type == 'U')
		return (pf_putuint(ph, db));*/
	else
		return (-1);
	return (0);
}
