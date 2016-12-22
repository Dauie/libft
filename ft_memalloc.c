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
	void *res;

	if (size > 9223372036854775807)
		return (NULL);
	res = malloc(size);
	if (!res)
		return (NULL);
	if (res)
		ft_bzero(res, size);
	return (res);
}
