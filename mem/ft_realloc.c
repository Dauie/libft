/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 15:24:27 by rlutt             #+#    #+#             */
/*   Updated: 2017/01/20 12:25:59 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
