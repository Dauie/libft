/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrip.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 14:18:12 by rlutt             #+#    #+#             */
/*   Updated: 2017/07/27 19:30:17 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"
#include "../../../incl/printf.h"
#include <stdio.h>

static int	ft_strcntchar(char *str, int c)
{
	int		i;
	int		cnt;

	cnt = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] == c)
			cnt++;
	}
	return (cnt);
}

char		*ft_strstrip(char *str, int c)
{
	char	*res;
	int		i;
	int		j;

	i = -1;
	j = -1;
	res = NULL;
	if (!(res = ft_strnew(ft_strlen(str) - ft_strcntchar(str, c))))
		return (NULL);
	while (str[++i])
	{
		if (str[i] != (char)c)
			res[++j] = str[i];
	}
	return (res);
}
