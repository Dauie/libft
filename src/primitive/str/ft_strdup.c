/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 17:57:11 by rlutt             #+#    #+#             */
/*   Updated: 2017/04/05 11:33:26 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"

char		*ft_strdup(const char *src)
{
	int		i;
	char	*res;

	i = -1;
	res = ft_strnew(ft_strlen(src));
	if (!res)
		return (NULL);
	while (src[++i])
		res[i] = src[i];
	res[i] = '\0';
	return (res);
}
