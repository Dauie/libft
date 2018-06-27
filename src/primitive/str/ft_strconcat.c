/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strconcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dauie <dauie@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 15:01:59 by dauie             #+#    #+#             */
/*   Updated: 2018/06/26 10:58:05 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"

char		*ft_strconcat(char *stra, char *strb)
{
	char	*ret;
	size_t	len;

	len = (ft_strlen(stra) + ft_strlen(strb));
	if (len <= 0)
		return (NULL);
	if (!(ret = ft_strnew(len)))
		return (NULL);
	ft_strcpy(ret, stra);
	ft_strcat(&ret[ft_strlen(stra)], strb);
	return (ret);
}
