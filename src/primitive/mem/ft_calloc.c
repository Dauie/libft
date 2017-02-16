/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 15:24:50 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/16 12:27:45 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/mem.h"

void		*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	size_t	sz;

	sz = nmemb * size;
	if (!(res = ft_memalloc(sz)))
		return (NULL);
	return (res);
}
