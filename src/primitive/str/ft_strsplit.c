/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 16:48:19 by rlutt             #+#    #+#             */
/*   Updated: 2017/07/24 16:11:49 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"

static char		*ft_xtrctnxtwrd(char *str, char c, size_t *i)
{
	size_t		y;
	char		*res;
	size_t		len;

	y = 0;
	len = ft_nxtwrdlen(&str[*i], c);
	if (!(res = (char *)ft_memalloc(sizeof(char) * len + 1)))
		return (NULL);
	if (str != NULL)
	{
		while (str[*i] != c && str[*i])
		{
			res[y] = str[*i];
			y++;
			*i += 1;
		}
	}
	res[y] = '\0';
	return (res);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**res;
	size_t		i;
	size_t		ii;
	size_t		wcnt;

	i = 0;
	ii = 0;
	if (!s || !c)
		return (NULL);
	wcnt = ft_cntwrds((char*)s, c);
	if (!(res = (char **)ft_memalloc(sizeof(char *) * (wcnt + 2))))
		return (NULL);
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && ii < wcnt)
	{
		res[ii] = ft_xtrctnxtwrd((char *)s, c, &i);
		ii++;
		while (s[i] && s[i] == c)
			i++;
	}
	res[ii] = NULL;
	return (res);
}
