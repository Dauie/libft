/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 22:03:03 by rlutt             #+#    #+#             */
/*   Updated: 2018/06/26 10:58:04 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/mem.h"

static void	copy_backwards(u_int8_t *d, u_int8_t *s, size_t len)
{
	s = s + len - 1;
	d = d + len - 1;
	while (len >= 8)
	{
		*(u_int64_t *)d = *(u_int64_t *)s;
		d -= 8;
		s -= 8;
		len -= 8;
	}
	while (len > 0)
	{
		*d-- = *s--;
		len--;
	}
}

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	u_int8_t	*d;
	u_int8_t	*s;

	d = (u_int8_t *)dst;
	s = (u_int8_t *)src;
	if (s < d)
		copy_backwards(d, s, len);
	else
	{
		while (len >= 8)
		{
			*(u_int64_t *)d = *(u_int64_t *)s;
			d += 8;
			s += 8;
			len -= 8;
		}
		while (len > 0)
		{
			*d++ = *s++;
			len--;
		}
	}
	return (dst);
}
