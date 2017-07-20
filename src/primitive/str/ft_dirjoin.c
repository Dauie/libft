/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dirjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/21 20:34:54 by rlutt             #+#    #+#             */
/*   Updated: 2017/05/21 20:40:11 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"

char			*ft_dirjoin(const char *s1, const char *s2)
{
	char	*ns;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(ns = ft_strnew((ft_strlen(s1) + 1) + ft_strlen(s2))))
		return (NULL);
	ft_strcpy(ns, (char *)s1);
	ft_strcat(ns, "/");
	ft_strcat(ns, s2);
	return (ns);
}
