/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 15:32:35 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/04 16:37:06 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"
#include "../../incl/put.h"
#include "../../incl/num.h"

int			pf_putnbr(attrib *ph, int n)
{
	long	tmp;

	tmp = n;
	if (ph->sign == TRUE && n > 0)
		ft_putchar('+');
	if (tmp < 0)
	{
		tmp = -tmp;
		ft_putchar('-');
	}
	if (tmp > 9)
	{
		ft_putnbr(tmp / 10);
		ft_putnbr(tmp % 10);
	}
	else
		ft_putchar(tmp + '0');
	return (ft_numlen(n, 10));
}
