#include "../../incl/printf.h"

static void 	putpad_u(attrib *ph, uiput *db)
{
	char	c;

	if (ph->mod)

	if (ph->width)
		ph->width = ph->width - ph->len;
	if (ph->zero == TRUE)
		c = '0';
	else
		c = ' ';
	while (ph->width-- > 0)
		pf_putchar(c, ph, db);
}

int				pf_print_u(attrib *ph, uiput *db)
{
	uintmax_t	phi;

	phi = va_arg(db->ap, uintmax_t);
	ph->len = ft_numlen(phi, 10);
	pf_putnbr(phi, ph, db);
	if (ph->width)
		putpad_u(ph, db);
	return (0);
}
