/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_crafttbl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 14:41:42 by rlutt             #+#    #+#             */
/*   Updated: 2018/06/26 10:58:05 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/tbl.h"
#include <stdarg.h>

char		**ft_crafttbl(size_t amt, ...)
{
	int		i;
	char	**res;
	char	*tmp;
	va_list	ap;

	va_start(ap, amt);
	i = -1;
	res = NULL;
	tmp = NULL;
	if (!(res = ft_memalloc(sizeof(char *) * (amt + 1))))
		return (NULL);
	while (++i < (int)amt)
	{
		tmp = va_arg(ap, char *);
		if (!(res[i] = ft_strdup(tmp)))
			return (NULL);
	}
	va_end(ap);
	return (res);
}
