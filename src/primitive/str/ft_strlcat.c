/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 18:41:09 by rlutt             #+#    #+#             */
/*   Updated: 2018/04/13 13:41:36 by dauie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"

size_t	ft_strlcat(char *dst, const char *src, int len)
{
	int		slen;
	int		dlen;
	int		i;

	slen = (int)ft_strlen(src);
	dlen = (int)ft_strlen(dst);
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
