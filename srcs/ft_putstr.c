/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 15:13:48 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/07 19:23:17 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	if (str != NULL)
	{
		while(str[i])
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}
