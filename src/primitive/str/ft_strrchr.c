/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 21:38:10 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/01 19:32:01 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"

char		*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*scp;

	i = -1;
	scp = NULL;
	while (s[++i] != '\0')
		if (s[i] == (char)c)
			scp = ((char*)&s[i]);
	if (s[i] == (char)c)
		scp = ((char *)&s[i]);
	return (scp);
}
