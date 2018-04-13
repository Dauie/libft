/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 13:42:03 by rlutt             #+#    #+#             */
/*   Updated: 2018/04/13 13:32:46 by dauie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"

void		ft_striter(char *s, void (*f)(char *))
{
	size_t i;
	size_t z;

	i = 0;
	if (s && f)
	{
		z = ft_strlen(s);
		while (i < z)
		{
			(f)(s);
			s++;
			i++;
		}
	}
}
