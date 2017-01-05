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

#include "../libft.h"

char		*ft_itoa(int nbg)
{
	long	nb;
	int		sz;
	char	*res;

	nb = nbg;
	sz = ft_numlen((long long)nbg, 10);
	if (!(res = ((char *)ft_memalloc(sz + 1))))
		return (NULL);
	sz--;
	if (nbg == 0)
		return (ft_strdup("0"));
	if (nbg < 0)
		nb = nb * -1;
	while (nb != 0)
	{
		res[sz] = nb % 10 + '0';
		nb = nb / 10;
		sz--;
	}
	if (nbg < 0)
		res[0] = '-';
	return (res);
}
