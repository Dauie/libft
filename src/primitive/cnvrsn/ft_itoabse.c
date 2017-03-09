/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 14:12:45 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/08 13:02:15 by rlutt            ###   ########.fr       */
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

int			get_base(char c)
{
	int base;

	base = 0;
	if (c == 'o' || c == 'O')
		base = 8;
	else if (c == 'x' || c == 'X')
		base = 16;
	return (base);
}

/*char		*pf_itoabase(t_print *all, intmax_t nbr, char c)
{
	char	buff[32];
	int		i;
	int		base;

	i = 30;
	base = get_base(c);
	if (nbr == 0)
		return (ft_strxnew('0', 1));
	else if (nbr < 0 && (all->sign = -1))
		nbr = nbr * -1;
	while (nbr > 0 && i > 0)
	{
		if (c == 'o' || c == 'x')
			buff[i] = "0123456789abcdef"[nbr % base];
		else if (c == 'O' || c == 'X')
			buff[i] = "0123456789ABCDEF"[nbr % base];
		nbr = nbr / base;
		--i;
	}
	buff[i] = '\0';
	return (ft_strdup(buff + i + 1));
}*/
