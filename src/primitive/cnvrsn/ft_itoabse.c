/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 14:12:45 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/16 12:27:37 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/cnvrsn.h"

char		*ft_itoabse(int nbg, int bse)
{
	long	nb;
	int		sz;
	char	*res;
	char	*hex;

	nb = nbg;
	hex = ft_strdup("0123456789ABCDEF");
	sz = ft_numlen((long long)nbg, 10);
	if (!(res = ((char *)ft_memalloc(sz-- + 1))))
		return (NULL);
	if (nbg == 0)
		return (ft_strdup("0"));
	if (nbg < 0)
		nb = nb * -1;
	while (nb != 0)
	{
		res[sz] = hex[nb % bse];
		nb = nb / bse;
		sz--;
	}
	if (nbg < 0)
		res[0] = '-';
	return (res);
}
