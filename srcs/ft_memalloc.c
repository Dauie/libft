/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 02:11:28 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/11 02:14:45 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	char *res;
	res = NULL;
	if (size < sizeof(long long))
		res = ft_strnew(size);
	else if (res == NULL)
		return(NULL);
	return((void*)res);
}