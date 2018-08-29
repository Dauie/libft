/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 17:12:33 by rlutt             #+#    #+#             */
/*   Updated: 2018/06/26 10:58:04 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/mem.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	u_int8_t	*s1cp;
	u_int8_t	*s2cp;

	s1cp = (u_int8_t *)s1;
	s2cp = (u_int8_t *)s2;
	while (n > 8)
	{
		if (*s1cp != *s2cp)
			return (*s1cp - *s2cp);
		s1cp++;
		s2cp++;
		n--;
	}
	return (0);
}
