/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:53:42 by rlutt             #+#    #+#             */
/*   Updated: 2018/06/26 10:58:04 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

int		pf_putstr(char *str, t_frmtnfo *ph, t_pfcore *db)
{
	int i;

	i = -1;
	if (str != NULL)
	{
		if (ph->upper == TRUE)
			while (str[++i])
				pf_putchar(ft_toupper(str[i]), db);
		else
			while (str[++i])
				pf_putchar(str[i], db);
	}
	return (0);
}
