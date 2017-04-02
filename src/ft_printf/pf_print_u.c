#include "../../incl/printf.h"

static int 	manage_uattrib(attrib *ph)
{
	if (ph->prec == 0 && ph->wprc == TRUE && !ph->width)
		return (0);
	if (ph->sign == TRUE)
	{
		ph->sign = FALSE;
		ph->actn = FALSE;
	}
	if (ph->prec && ph->width)
	{
		if (ph->prec > ph->width)
		{
			ph->zero = TRUE;
			ph->width = ph->prec;
		}
		else if (ph->width > ph->prec)
		{
			ph->hash = TRUE;
			ph->width--;
		}
		ph->width = ph->width - ph->len;
	}
	else if (ph->width && !ph->prec)
	{
		if (ph->algn == TRUE)
			ph->zero = FALSE;
		ph->width = ph->width - ph->len;
	}
	else if (ph->prec && !ph->width)
	{
		ph->zero = TRUE;
		ph->width = ph->prec - ph->len;
	}
	return (1);
}

static void 	putpad_u(attrib *ph, uiput *db)
{
	char	c;

	c = ' ';
	if (ph->zero == TRUE && ph->phd.uimt != 0)
		c = '0';
	if (ph->actn == TRUE)
	{
		if (ph->sign == TRUE && ph->wneg == FALSE)
			pf_putchar('+', db);
		else if (ph->wneg == TRUE && ph->actn == TRUE)
			pf_putchar('-', db);
		ph->actn = FALSE;
	}
	while (ph->width-- > 0)
		pf_putchar(c, db);
}

int				pf_print_u(attrib *ph, uiput *db)
{
	pf_lmgmt_oux(db, ph);
	ph->len = ft_numlen(ph->phd.uimt, 10);
	if (!(manage_uattrib(ph)))
		return (0);
	if (ph->algn == TRUE)
	{
		pf_putnbr(ph->phd.uimt, ph, db);
		if (ph->width)
			putpad_u(ph, db);
	}
	else
	{
		if (ph->sign == TRUE)
			ph->actn = TRUE;
		if (ph->width)
			putpad_u(ph, db);
		pf_putnbr(ph->phd.uimt, ph, db);
	}
	return (1);
}
