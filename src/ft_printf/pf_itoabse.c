#include "../../incl/printf.h"


static char *pf_itoaz(attrib *ph)
{
	if (ph->prec == 0 && ph->wprc == TRUE &&
		ph->width == 0 && ph->hash == FALSE &&
		(ph->type == 'x' || ph->type == 'X'))
		return (ft_strdup(" "));
	else if (ph->prec == 0 && ph->wprc == TRUE && ph->hash == FALSE &&
		(ph->type == 'o' || ph->type == 'O'))
		return (ft_strdup(" "));
	else if (ph->hash == TRUE)
		return (ft_strdup("0"));
	else
		return (ft_strdup("0"));
}

size_t		pf_numlen(uintmax_t nb, int bse, attrib *ph)
{
	size_t		i;

	i = 1;
	if (ph->wneg == TRUE)
		i++;
	while (nb /= bse)
		i++;
	return (i);
}

char		*pf_itoabse(uintmax_t nbg, int bse, attrib *ph)
{
	uintmax_t	nb;
	size_t		sz;
	char		*res;
	char		*hex;

	if (ph->upper == TRUE)
		hex = ft_strdup(UHEX);
	else
		hex = ft_strdup(LHEX);
	nb = nbg;
	sz = ft_numlen(nbg, bse);
	if (!(res = ((char *)ft_memalloc(sz-- + 1))))
		return (NULL);
	if (nbg == 0)			// this is where %jx w/ 0 is being broken;
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
