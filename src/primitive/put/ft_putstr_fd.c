/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 15:13:48 by rlutt             #+#    #+#             */
/*   Updated: 2017/03/01 19:32:59 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../incl/put.h"

void		ft_putstr_fd(char const *s, int fd)
{
	int		i;

	i = -1;
	if (s != NULL)
		while (s[++i])
			ft_putchar_fd(s[i], fd);
}
