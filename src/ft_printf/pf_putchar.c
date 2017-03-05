/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 15:35:54 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/04 18:29:07 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"../../incl/char.h"
#include	"../../incl/printf.h"

int		pf_putchar(char c, attrib *ph, uiput *db)
{
	attrib *tmp;

	tmp = ph;
	write(1, &c, 1);
	db->tot += 1;
	return (1);
}
