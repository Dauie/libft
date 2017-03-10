/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 15:35:54 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/09 18:50:00 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include	"../../incl/printf.h"

static void 	spacedone(attrib *ph);
static void 	signdone(attrib *ph);
static void 	hashdone(attrib *ph);

int				pf_putchar(char c, attrib *ph, uiput *db)
{
	if (pf_isox(ph->type) && ph->actn == TRUE)
	{
		hashdone(ph);
		pf_putstr("0x", ph, db);
	}
	if (c == ' ')
		spacedone(ph);
	if (c == '-' || c == '+')
		signdone(ph);
	write(1, &c, 1);
	db->tot += 1;
	return (1);
}

static void 	hashdone(attrib *ph)
{
	ph->actn = FALSE;
	if (ph->type == 'x' || ph->type == 'X')
		ph->width -= 2;
	else if (ph->type == 'o' || ph->type == 'O')
		ph->width -= 1;
}

static void 	spacedone(attrib *ph)
{
	ph->spc = FALSE;
	ph->width -= 1;
}

static void 	signdone(attrib *ph)
{
	ph->sign = FALSE;
	ph->width -= 1;
}
