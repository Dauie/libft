/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 21:58:40 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/09 00:36:13 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int		len;
	int		i;

	i = 0;
	len = 0;
	if (s)
		len = ft_strlen(s);
	res = (char *)ft_memalloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	if (s && f)
	{
		while (*s)
		{
			res[i] = (*f)(*s);
			i++;
			s++;
		}
	}
	res[i] = '\0';
	return (res);
}
