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
	u_int8_t		*d;
	u_int8_t		*s;

	d = dst;
	s = (u_int8_t *)src;
	while (n >= 8)
	{
		*(u_int64_t*)d = *(u_int64_t*)s;
		d += 8;
		s += 8;
		n -= 8;
	}
	while (n > 0)
	{
		*d = (u_int8_t)*s;
		d++;
		s++;
		n--;
	}
	return (dst);
}
