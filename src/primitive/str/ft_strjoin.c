/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 20:08:33 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/16 12:30:20 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*ns;
	int		i;
	int		it;

	i = 0;
	it = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(ns = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	if (s1 != NULL && s2 != NULL)
	{
		while (s1[i])
		{
			ns[i] = s1[i];
			i++;
		}
		while (s2[it])
			ns[i++] = s2[it++];
	}
	ns[i] = '\0';
	return (ns);
}
