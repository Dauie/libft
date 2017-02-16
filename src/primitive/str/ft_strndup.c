/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 12:56:40 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/16 12:30:47 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"

char		*ft_strndup(const char *src, size_t len)
{
	size_t	i;
	char	*res;

	i = 0;
	res = ft_strnew(ft_strlen(src));
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
