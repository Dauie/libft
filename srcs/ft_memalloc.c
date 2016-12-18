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
	res = malloc(size + 1);
	if (res)
	{
		ft_memset(res, '\0', size);
	}
	return (res);
}
