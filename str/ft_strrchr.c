/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 21:38:10 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/06 15:59:22 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char		*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*scp;

	i = 0;
	scp = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			scp = ((char*)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		scp = ((char *)&s[i]);
	return (scp);
}
