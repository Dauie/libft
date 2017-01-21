/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 15:24:50 by rlutt             #+#    #+#             */
/*   Updated: 2017/01/20 13:09:01 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void		*ft_calloc(size_t nmemb, size_t size)
{
	void	*res;
	size_t	sz;

	sz = nmemb * size;
	if (!(res = ft_memalloc(sz)))
		return (NULL);
	return (res);
}
