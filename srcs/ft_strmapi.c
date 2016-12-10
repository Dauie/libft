/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 21:58:40 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/01 23:43:14 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	i = 0;
	res = (char *)malloc(sizeof(ft_strlen(s)) + 1);
	if (res == NULL)
		return NULL;
	while(s[i])
	{
		f(s[i], *s);
		i++;
		s++;
	}
	return (res);
}
