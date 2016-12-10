/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 17:33:00 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/09 00:13:05 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char *res;
	int len;
	len = ft_strlen(s + 1);
	res = ft_strnew(len);
	res = (char*)s;
	if (res)
	{
		while(*res == ' ' || *res == '\n' || *res == '\t')
			res++;
		while (res[len] == ' ' || res[len] == '\n' || res[len] == '\t')
		{
			res[len] = '\0';
			len--;
		}

	}
		return (res);
}
