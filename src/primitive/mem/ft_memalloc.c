/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/11 02:11:28 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/05 10:17:50 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/mem.h"

void		*ft_memalloc(size_t size)
{
	void 	*res;

	res = malloc(size);
	if (!res)
		return (NULL);
	ft_bzero(res, size);
	return (res);
}
