/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:54:13 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/03 12:17:35 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"
#include <string.h>

int		pf_putstrprec(char *str, attrib *ph, uiput *db)
{
	int i;

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


static void 	putpad_s(attrib *ph, uiput *db)
{
	char	c;

	if (ph->width)
		ph->width = ph->width - ph->len;
	if (ph->zero == TRUE)
		c = '0';
	else
		c = ' ';
	while (ph->width-- > 0)
		pf_putchar(c, db);
	ph->width = 0;
}

int			pf_print_s(attrib *ph, uiput *db)
{
	char	*phs;

	if (!(phs = va_arg(db->ap, char *)))
	{
		pf_putstr("(null)", ph, db);
		return(0);
	}
	ph->len = ft_strlen(phs);
	if (ph->algn == TRUE)
	{
		if (ph->prec < ph->len)
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
		if (ph->prec < ph->len && ph->wprc == TRUE)
			pf_putstrprec(phs, ph, db);
		else
			pf_putstr(phs, ph, db);
	}
	return (0);
}
