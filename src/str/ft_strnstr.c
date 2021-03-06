/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 20:00:47 by rlutt             #+#    #+#             */
/*   Updated: 2018/06/26 10:58:05 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/str.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned char	*pbig;
	unsigned char	*plit;
	size_t			lenc;

	if (*little == '\0')
		return ((char *)big);
	while (*big && len)
	{
		if (*big == *little)
		{
			pbig = (unsigned char *)big;
			plit = (unsigned char *)little;
			lenc = len;
			while (*pbig == *plit && *plit && lenc--)
			{
				pbig++;
				plit++;
			}
			if (*plit == '\0')
				return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}
