#include "../../incl/printf.h"


static char *pf_itoaz(attrib *ph)
{
	if ((!ph->width || !ph->prec) && ph->hash == FALSE)
		return (ft_strdup(" "));
	else
		return (ft_strdup("0"));
}

char		*pf_itoabse(int nbg, int bse, attrib *ph)
{
	long	nb;
	int		sz;
	char	*res;
	char	*hex;

	if (ph->upper == TRUE)
		hex = ft_strdup(UHEX);
	else
		hex = ft_strdup(LHEX);
	nb = nbg;
	sz = ft_numlen((long long)nbg, 10);
	if (!(res = ((char *)ft_memalloc(sz-- + 1))))
		return (NULL);
	if (nbg == 0)
		return (pf_itoaz(ph));
	if (nbg < 0)
		nb = nb * -1;
	while (nb)
	{
		res[sz--] = hex[nb % bse];
		nb = nb / bse;
	}
	if (nbg < 0)
		res[0] = '-';
	return (res);
}
