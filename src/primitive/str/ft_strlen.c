/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 10:38:44 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/16 12:30:26 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/str.h"

size_t		ft_strlen(const char *str)
{
	size_t i;

	i = 0;
	if (!str[i])
		return (0);
	while (str[i])
		i++;
	return (i);
}
