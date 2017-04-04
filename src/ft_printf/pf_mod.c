/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_mod.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 10:42:28 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/04 11:07:19 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

int			pf_ismod_pre(const char *frmt, uiput *db)
{
	if (frmt[db->inx] == 'h' || frmt[db->inx] == 'l' ||
		frmt[db->inx] == 'j' || frmt[db->inx] == 'z')
		return (1);
	else
		return (0);
}

int			pf_parse_mod(const char *frmt, uiput *db, attrib *ph)
{
	if (!ph->mod)
	{
		if (frmt[db->inx] == 'h')
		{
			if (frmt[db->inx + 1] != 'h')
				ph->mod = 'h';
			else
				ph->mod = 'H';
		}
		else if (frmt[db->inx] == 'l')
		{
			if (frmt[db->inx + 1] != 'l')
				ph->mod = 'l';
			else
				ph->mod = 'L';
		}
		else if (frmt[db->inx] == 'j')
			ph->mod = 'j';
		else if (frmt[db->inx] == 'z')
			ph->mod = 'z';
	}
	db->inx = (ft_isupper(ph->mod)) ? (db->inx += 2) : (db->inx += 1);
	return (ph->mod);
}
