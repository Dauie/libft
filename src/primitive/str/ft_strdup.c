/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 17:57:11 by rlutt             #+#    #+#             */
/*   Updated: 2018/05/21 15:45:30 by dauie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"

char		*ft_strdup(const char *src)
{
	char		*res;
	size_t		len;

	len = ft_strlen(src);
	if (!(res = ft_strnew(len)))
		return (NULL);
	ft_strcpy(res, (char *)src);
	return (res);
}
