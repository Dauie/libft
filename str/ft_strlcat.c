/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 18:41:09 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/05 19:31:10 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, int len)
{
	int		s;
	int		d;
	int		i;

	s = ft_strlen(src);
	d = ft_strlen(dst);
	i = 0;
	if (len - 1 <= d)
		return ((size_t)(s + len));
	while ((d + i) < len - 1)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return ((size_t)d + s);
}
