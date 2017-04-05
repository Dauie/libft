/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 16:57:42 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/05 11:24:00 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/mem.h"

void			*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	const char		*s;

	d = dst;
	s = src;
	while (n > 0)
	{
		*d = *s;
		d++;
		s++;
		n--;
	}
	return (dst);
}
