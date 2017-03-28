#include "../../incl/printf.h"


static char *pf_itoaz(attrib *ph)
{
	if (ph->wprc == FALSE && (ph->actn == TRUE
		|| ph->type == 'x' || ph->type == 'X'))
		return (ft_strdup("0"));
	else
		return (ft_strdup(" "));
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
