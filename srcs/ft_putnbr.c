/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 15:32:35 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/07 20:18:46 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr(int n)
{
	long tmp;
	char *int_min = {"-2147483648"};
	char *int_max = {"2147483648"};

	tmp = n;
	if (tmp == -2147483648)
	{
		ft_putstr(int_min);
		return ;
	}
	if (tmp == 2147483648)
	{
		ft_putstr(int_max);
		return ;
	}
	if (tmp < 0)
	{
	 	tmp = -tmp;
		ft_putchar('-');
	}
	if (tmp > 9)
	{
		tmp = tmp / 10;
		tmp = tmp % 10;
	}
	else
		ft_putchar(tmp + '0');
}
