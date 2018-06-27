/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 21:58:40 by rlutt             #+#    #+#             */
/*   Updated: 2018/06/26 10:58:04 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*res;
	unsigned int	i;
	size_t			len;

	i = 0;
	len = 0;
	if (s)
		len = ft_strlen(s);
	res = ft_strnew(len);
	if (!res)
		return (NULL);
	if (s && f)
	{
		if ((ft_strlen(s) != 0))
			res = ft_strncpy(res, (char *)s, len + 1);
		while (i < len)
		{
			res[i] = (*f)(i, res[i]);
			i++;
		}
	}
	return (res);
}
