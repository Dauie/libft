/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 01:01:18 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/16 12:27:56 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/mem.h"

void			*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*cp;

	i = 0;
	cp = s;
	while (i < n)
	{
		if (cp[i] == (char)c)
		{
			cp = &cp[i];
			return ((void *)cp);
		}
		i++;
	}
	return (NULL);
}
