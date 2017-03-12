/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 15:35:54 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/11 17:06:14 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include	"../../incl/printf.h"

static void 	spacedone(attrib *ph);
static void 	signdone(attrib *ph);
/*static void 	hashdone(attrib *ph);*/
/*static void		handel_hox(attrib *ph, uiput *db);*/

int				pf_putchar(char c, attrib *ph, uiput *db)
{
	/*if (ph->actn == TRUE && (pf_isoxdi(ph->type) == 1 || pf_isoxdi(ph->type) == 2))
		handel_hox(ph, db);*/
	if (c == ' ')
		spacedone(ph);
	if (c == '-' || c == '+')
		signdone(ph);
	write(1, &c, 1);
	db->tot += 1;
	return (1);
}

/*static void handel_hox(attrib *ph, uiput *db)
{

	if (pf_isoxdi(ph->type) == 1 && ph->hash == TRUE)
	{
		ph->actn = FALSE;
		pf_putstr("0x", ph, db);
	}
	else if (pf_isoxdi(ph->type) == 2)
	{
		ph->actn = FALSE;
		pf_putchar('0', ph, db);
	}
	else
		return ;
}*/

/*static void 	hashdone(attrib *ph)
{
	ph->actn = FALSE;
	if (ph->type == 'x' || ph->type == 'X')
		ph->width -= 1;
	else if (ph->type == 'o' || ph->type == 'O')
		ph->width -= 1;
}*/

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
