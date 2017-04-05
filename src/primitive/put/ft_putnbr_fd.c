/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 05:10:18 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/05 10:45:51 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/put.h"

void			ft_putnbr_fd(intmax_t n, int fd)
{
	intmax_t	x;

	x = n;
	if (x < 0)
	{
		x = -x;
		ft_putchar_fd('-', fd);
	}
	if (x > 9)
	{
		ft_putnbr_fd(x / 10, fd);
		ft_putnbr_fd(x % 10, fd);
	}
	else
		ft_putchar_fd(x + '0', fd);
}
