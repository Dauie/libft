/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 21:38:10 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/06 14:24:56 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	*scp;

	scp = (char *)s;
	if (c == '\0')
	{
		while (*scp)
			scp++;
		return (scp);
	}
	while (*scp)
	{
		if (*scp == c)
			return (scp);
		scp++;
	}
	return (NULL);
}
