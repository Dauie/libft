/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cnttotspc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 15:09:24 by rlutt             #+#    #+#             */
/*   Updated: 2018/04/13 13:41:36 by dauie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"

size_t		ft_cnttotspc(const char *string)
{
	size_t 	i;
	char	*str;

	i = 0;
	str = (char *)string;
	while (*str)
	{
		if (*str == ' ' || *str == '\n' || *str == '\v'
			|| *str == '\t' || *str == '\f' || *str == '\r')
			i++;
		str++;
	}
	return (i);
}
