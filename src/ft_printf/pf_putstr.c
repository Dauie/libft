/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:53:42 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/05 14:42:03 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

int		pf_putstr(char *str, attrib *ph, uiput *db)
{
	int i;

	i = -1;
	if (str != NULL)
	{
		if (ph->upper == TRUE)
			while (str[++i])
				pf_putchar(ft_toupper(str[i]), ph, db);
		else
			while (str[++i])
				pf_putchar(str[i], ph, db);
	}
	return (0);
}
