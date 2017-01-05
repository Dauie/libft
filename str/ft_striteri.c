/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <ausdauerr@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 23:30:21 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/01 23:39:08 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void		ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int i;
	int y;

	i = 0;
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
