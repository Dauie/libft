/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:53:42 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/04 18:14:51 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

int		pf_putstr(char *str, attrib *ph, uiput *db)
{
	int i;

	i = -1;
	if (str != NULL)
		while (str[++i])
			pf_putchar(str[i], ph, db);
	return (0);
}
