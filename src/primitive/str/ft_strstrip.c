/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstrip.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 14:18:12 by rlutt             #+#    #+#             */
/*   Updated: 2017/07/20 15:00:12 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"

static int ft_strcntchar(char *str, int c)
{
	int i;
	int cnt;

	cnt = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] == c)
			cnt++;
	}
	return (cnt);
}

void ft_strstrip(char *str, int c)
{
	int 	i;
	int 	j;
	char 	*rep;

	rep = NULL;
	i = -1;
	j = -1;
	if (!str || !c)
		return ;
	if (!(rep = ft_strnew(ft_strlen(str) -  ft_strcntchar(str, c))))
		return ;
	while (str[++j])
	{
		if (str[j] != c)
			rep[++i] = str[j];
	}
	free(str);
	str = rep;
}