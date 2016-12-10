/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 02:22:33 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/09 03:06:07 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *d;
	const char *s;

	d = dst;
	s = src;
/*    if (dst == NULL || src == NULL)
        return (NULL);*/
	while (n > 0)
	{
		if (*s == (unsigned char)c)
		{

			s++;
			*d = *s;
			return (d);
		}
		*d = (unsigned char)*s;
        d++;
        s++;
		n--;
	}
	return (dst);
}