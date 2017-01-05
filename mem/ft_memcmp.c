/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/10 17:12:33 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/10 17:12:47 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
