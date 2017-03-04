/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putpad_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:54:40 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/04 11:08:48 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

void 		pf_putpad_i(attrib *ph, uiput *db)
{
	int		len;
	char	c;

	len = ph->width - ph->aglen;
	if (ph->zero == TRUE)
		c = '0';
	else
		c = ' ';
	while (len-- > 0)
	{
		ft_putchar(c);
		db->tot++;
	}
}
