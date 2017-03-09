/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 18:41:09 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/06 18:24:54 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"

size_t	ft_strlcat(char *dst, const char *src, int len)
{
	int		slen;
	int		dlen;
	int		i;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	i = 0;
	if (len - 1 <= dlen)
		return ((size_t)(slen + len));
	while ((dlen + i) < len - 1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return ((size_t)dlen + slen);
}
