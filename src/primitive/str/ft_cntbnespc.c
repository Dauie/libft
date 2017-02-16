/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cntbnespc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 15:18:10 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/16 12:29:14 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"

size_t		ft_cntbnespc(char *str)
{
	char	*ep;
	size_t	i;

	i = 0;
	ep = str;
	ep = ep + ft_strlen(str);
	while (*str == ' ' || *str == '\n' || *str == '\t' ||
			*str == '\v' || *str == '\r' || *str == '\f')
	{
		str++;
		i++;
	}
	ep--;
	while (*ep == ' ' || *ep == '\n' || *ep == '\t' ||
			*ep == '\v' || *ep == '\r' || *ep == '\f')
	{
		ep--;
		i++;
	}
	return (i);
}
