/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 22:03:03 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/09 22:03:19 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void        *ft_memmove(void *dst, const void *src, size_t len)
{
    char *d;
    char *s;

    d = (char *)dst;
    s = (char *)src;
    if (s < d)
    {
        s = s + len - 1;
        d = d + len - 1;
        while (len)
        {
            *d-- = *s--;
            len--;
        }
        return (dst);
    }
    else
    {
        while (len)
        {
            *d++ = *s++;
            len--;
        }
        return (dst);
    }
}