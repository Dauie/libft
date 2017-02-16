/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 17:12:33 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/16 12:28:00 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/mem.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1cp;
	unsigned char	*s2cp;

	s1cp = (unsigned char*)s1;
	s2cp = (unsigned char*)s2;
	while (n > 0)
	{
		if (*s1cp != *s2cp)
			return (*s1cp - *s2cp);
		s1cp++;
		s2cp++;
		n--;
	}
	return (0);
}
