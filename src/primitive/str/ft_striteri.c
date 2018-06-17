/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 23:30:21 by rlutt             #+#    #+#             */
/*   Updated: 2018/05/21 15:45:30 by dauie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"

void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t			i;
	unsigned int	y;

	y = 0;
	if (s != NULL && f != NULL)
	{
		i = ft_strlen(s);
		while (y < i)
		{
			(*f)(y++, s++);
		}
	}
}
