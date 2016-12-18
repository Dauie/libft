/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 22:06:46 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/07 19:34:41 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	i = 0;
	sub = (char *)malloc(sizeof(char) * len + 1);
	if (sub == NULL)
		return (NULL);
	if (s != NULL)
	{
		while (len)
		{
			sub[i] = s[start];
			i++;
			start++;
			len--;
		}
	}
	sub[i] = '\0';
	return (sub);
}
