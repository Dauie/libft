/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_itoabse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/04 10:42:15 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/16 10:24:09 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

static char				*g_lhex = {"0123456789abcdef"};
static char				*g_uhex = {"0123456789ABCDEF"};

static char	*pf_itoaz(t_frmtnfo *ph)
{
	if (ph->prec == 0 && ph->wprc == TRUE &&
		ph->hash == FALSE)
		return (ft_strdup(" "));
	else if (ph->prec == 0 && ph->wprc == TRUE && ph->hash == FALSE &&
		(ph->type == 'o' || ph->type == 'O'))
		return (ft_strdup(" "));
	else if (ph->hash == TRUE)
		return (ft_strdup("0"));
	else
		return (ft_strdup("0"));
}

size_t		pf_numlen(uintmax_t nb, int bse, t_frmtnfo *ph)
{
	size_t		i;

	i = 1;
	if (ph->wneg == TRUE || ph->sign)
		i++;
	while (nb /= bse)
		i++;
	return (i);
}

char		*pf_itoabse(uintmax_t nbg, int bse, t_frmtnfo *ph)
{
	uintmax_t	nb;
	size_t		sz;
	char		*res;
	char		*hex;

	if (ph->upper == TRUE)
		hex = ft_strdup(g_uhex);
	else
		hex = ft_strdup(g_lhex);
	nb = nbg;
	sz = pf_numlen(nbg, bse, ph);
	if (!(res = ((char *)ft_memalloc(sz-- + 1))))
		return (NULL);
	if (nbg == 0)
		return (pf_itoaz(ph));
	while (nb)
	{
		res[sz--] = hex[nb % bse];
		nb = nb / bse;
	}
	if (ph->wneg == TRUE)
		res[0] = '-';
	ft_strdel(&hex);
	return (res);
}
