/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 16:48:19 by rlutt             #+#    #+#             */
/*   Updated: 2016/11/30 17:25:35 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	int i;
	int ii;
	char **res;
	
	i = 0;
	ii = 0;
	res = NULL;
	while(*s)
	{
		if(*s == c)
			s++;
		while(*s != c)
		{
			res[ii][i] = *s;
			if (*s == c)
			{
				i = 0;
				ii++;
			}
			i++;
			s++;
		}
	}
	return (res);
}
