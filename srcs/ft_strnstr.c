/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 20:00:47 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/07 14:52:12 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *big, const char *little, size_t n)
{
	const char *res;
	const char *end;
	size_t	llen;

	res = big;
	end = res + n;
	llen = ft_strlen(little);
	if (llen == 0)
		return ((char*)big);
	end -= (llen -1);
	while (res < end)
	{
		if (ft_strncmp(res, little, llen) == 0)
			return ((char *)res);
		res++;
	}
	return (NULL);
}
