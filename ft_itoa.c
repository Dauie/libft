/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 14:12:45 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/02 21:24:23 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int nbg)
{
	char	hex[16];
	long	nb;
	int		sz;
	char	*res;

	nb = nbg;
	sz = ft_numlen(nbg);
	ft_strncpy(hex, "0123456789ABCDEF", 16);
	if (!(res = ((char *)ft_memalloc(sizeof(char) * sz + 1))))
		return (NULL);
	res[sz-- + 1] = '\0';
	if (nbg == 0)
		return ("0");
	if (nbg < 0)
		nb = nb * -1;
	while (nb)
	{
		res[sz] = hex[nb % 10];
		nb = nb / 10;
		sz--;
	}
	if (nbg < 0)
		res[0] = '-';
	return (res);
}
