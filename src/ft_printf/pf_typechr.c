/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_typechr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 19:53:30 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/02 11:40:58 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/printf.h"

char 		*pf_typechr(char *phstrt)
{
	char	*flg;
	int		i;

	i = -1;
	flg = NULL;
	while (phstrt[++i])
	{
		if (pf_istype(phstrt[i]))
			return (flg = &phstrt[i]);
	}
	return (flg);
}
