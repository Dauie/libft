/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 15:35:54 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/15 15:16:33 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include	"../../incl/printf.h"

int				pf_putchar(char c, attrib *ph, uiput *db)
{
	if (c == ' ')
		ph->spc = FALSE;
	if (c == '-' || c == '+')
		ph->sign = FALSE;
	if (c == '0' && ph->actn == TRUE)
		ph->actn = FALSE;
	write(1, &c, 1);
	db->tot += 1;
	return (1);
}
