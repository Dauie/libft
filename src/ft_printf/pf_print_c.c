/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 15:34:02 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/02 15:35:41 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			pf_print_s(attrib *ph, uiput *db)
{
	int		padlen;
	char	phc;

	padlen = 0;
	phc = va_arg(db->ap, char);
	if (ph->algn == TRUE)
	{
		db->tot += pf_putchar(phs);
		if (ph->width)
			pf_putpad(ph, db);
	}
	else
	{
		if (ph->width)
			pf_putpad(ph, db);
		db->tot += pf_putstr(phs);
	}
	return (padlen);
}
