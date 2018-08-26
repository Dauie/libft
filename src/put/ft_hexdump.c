/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 15:32:51 by rlutt             #+#    #+#             */
/*   Updated: 2018/08/25 15:43:46 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

static void		print_position(int i, int len, int cols, void *mem)
{
	if(i % cols == 0)
		ft_printf("0x%06x: ", i);
	if(i < len)
		ft_printf("%02x ", 0xFF & ((char*)mem)[i]);
	else
		ft_printf("   ");
}

void				ft_hexdump(void *mem, int cols, int len)
{
	int				i;
	int				j;

	i = 0;
	while (i++ < len + ((len % cols) ? (cols - len % cols) : 0))
	{
		print_position(i, len, cols, mem);
		if(i % cols == (cols - 1))
		{
			j = i - (cols - 1);
			while (j++ <= i)
			{
				if(j >= len)
					ft_putchar(' ');
				else if(ft_isprint(((char*)mem)[j]))
					ft_putchar(0xFF & ((char*)mem)[j]);
				else
					ft_putchar('.');
			}
			ft_printf("\n");
		}
	}
}