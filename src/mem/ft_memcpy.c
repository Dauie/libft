/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 16:57:42 by rlutt             #+#    #+#             */
/*   Updated: 2018/06/26 10:58:04 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/mem.h"

void			*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	const char		*s;

	d = dst;
	s = src;
	while (n > 0)
	{
		*d = (unsigned char)*s;
		d++;
		s++;
		n--;
	}
	return (dst);
}
