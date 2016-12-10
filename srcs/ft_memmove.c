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
    size_t op;
    size_t en;
    size_t cu;

    if (dst != src)
    {
        if (dst < src) {
            op = 1;
            cu = 0;
            en = len;
        } else {
            op = -1;
            cu = len - 1;
            en = -1;
        }
    }
    if (src != NULL && dst != NULL)
    {
        while (cu != en)
        {
            *((unsigned char *) dst + cu) = *((unsigned char *) src + cu);
            cu += op;
        }
    }
    return (dst);
}