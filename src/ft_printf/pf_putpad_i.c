/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putpad_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:54:40 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/04 15:59:16 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

void 		pf_putpad_i(attrib *ph, uiput *db)
{
	int		len;
	char	c;
	
	len = ph->width - ph->len;
	if (ph->sign == TRUE)
		len--;
	if (ph->spc == TRUE)
		c = ' ';
	else
		c = '0';
	while (len-- > 0)
	{
		ft_putchar(c);
		db->tot++;
	}
}
