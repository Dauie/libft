/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 11:23:38 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/16 12:30:54 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"

char		*ft_strnew(size_t size)
{
	char	*res;

	res = (char *)ft_memalloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	return (res);
}
