/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 02:22:33 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/09 03:06:07 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void				*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char	x;
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	x = (unsigned char)c;
	while (i < n)
	{
		if ((*str1++ = *str2++) == x)
			return (str1);
		i++;
	}
	return (NULL);
}
