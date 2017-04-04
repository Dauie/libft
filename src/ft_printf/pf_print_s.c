/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:54:13 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/04 11:34:37 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

int				pf_putstrprec(char *str, t_frmtnfo *ph, t_pfcore *db)
{
	int			i;

	i = 0;
	if (str != NULL)
	{
		if (ph->upper == TRUE)
			while (ph->prec--)
				pf_putchar(ft_toupper(str[i++]), db);
		else
			while (ph->prec--)
				pf_putchar(str[i++], db);
	}
	return (0);
}

static void		putpad_s(t_frmtnfo *ph, t_pfcore *db)
{
	char		c;

	if (ph->zero == TRUE)
		c = '0';
	else
		c = ' ';
	while (ph->width-- > 0)
		pf_putchar(c, db);
	ph->width = 0;
}

static int		manage_swidprec(t_frmtnfo *ph, t_pfcore *db, char *phs)
{
	if (!phs)
	{
		pf_putstr("(null)", ph, db);
		return (0);
	}
	ph->len = ft_strlen(phs);
	if (ph->prec > ph->len)
		ph->prec = 0;
	if (ph->width && ph->prec)
	{
		ph->len = ph->len - ph->prec;
		ph->width = ph->width - ph->prec;
	}
	else if (ph->width && !ph->prec)
		ph->width = ph->width - ph->len;
	return (0);
}

int				pf_print_s(t_frmtnfo *ph, t_pfcore *db)
{
	char		*phs;

	phs = va_arg(db->ap, char *);
	manage_swidprec(ph, db, phs);
	if (ph->algn == TRUE)
	{
		if (ph->prec && ph->wprc == TRUE)
			pf_putstrprec(phs, ph, db);
		else
			pf_putstr(phs, ph, db);
		if (ph->width)
			putpad_s(ph, db);
	}
	else
	{
		if (ph->width)
			putpad_s(ph, db);
		if (ph->prec && ph->wprc == TRUE)
			pf_putstrprec(phs, ph, db);
		else
			pf_putstr(phs, ph, db);
	}
	return (0);
}
