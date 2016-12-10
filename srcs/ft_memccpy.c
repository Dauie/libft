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
    size_t i;
	unsigned char *d;
	const char *s;

    i = 0;
	d = dst;
	s = (char*)src;
/*    if (dst == NULL || src == NULL)
        return (NULL);*/
	while (i < n &&( i == 0 || s[i - 1] != c))
	{
        d[i] = s[i];
        i++;
	}
    if (i > 0 && s[i - 1] == c)
		return (dst + i);
	else
		return (NULL);
}