/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 17:11:12 by rlutt             #+#    #+#             */
/*   Updated: 2016/12/07 19:44:50 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putendl(char const *s)
{
	int i;

	i = 0;
	if (s != NULL)
	{
		while(s[i])
		{
			ft_putchar(s[i]);
			i++;
		}
	}
	ft_putchar('\n');
}
