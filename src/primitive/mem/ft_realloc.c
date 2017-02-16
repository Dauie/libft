/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 15:24:27 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/16 12:28:16 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/mem.h"

void		*ft_realloc(void *mem, size_t memsz, size_t nsz)
{
	void	*res;
	size_t	size;

	size = memsz + nsz;
	if (!(res = ft_memalloc(size)))
		return (NULL);
	ft_memmove(res, mem, memsz);
	free(mem);
	return (res);
}
