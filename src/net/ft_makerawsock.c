/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makerawsock.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 15:51:40 by rlutt             #+#    #+#             */
/*   Updated: 2018/08/22 16:21:28 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/net.h"

/*
** proto will either be IPPROTO_RAW or IPPROTO_UDP
*/

int				ft_makerawsock(int proto)
{
	int			sock;

	if ((sock = socket(AF_INET, SOCK_RAW, proto)) < 0)
	{
		dprintf(STDERR_FILENO, "Error socket().\n");
		exit(FAILURE);
	}
	return (sock);
}
