/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 15:32:35 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/05 15:18:49 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"
#include "../../incl/put.h"
#include "../../incl/num.h"

int			pf_putnbr(int n, attrib *ph, uiput *db)
{
	long	tmp;

	tmp = n;
	if (ph->spc == TRUE)
		pf_putchar(' ', ph, db);
	if (ph->sign == TRUE && n > 0)
		pf_putchar('+', ph, db);
	if (tmp < 0)
	{
		tmp = -tmp;
		pf_putchar('-', ph, db);
	}
	if (ph->width && ph->algn == FALSE)
		pf_putpad_c(ph, db);
	if (tmp > 9)
	{
		pf_putnbr(tmp / 10, ph, db);
		pf_putnbr(tmp % 10, ph, db);
	}
	else
		pf_putchar(tmp + '0', ph, db);
	return (0);
}
