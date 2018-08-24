/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setsock_timeout.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 15:35:53 by rlutt             #+#    #+#             */
/*   Updated: 2018/08/23 00:14:12 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/net.h"

/*
** type will either be SO_SNDTIMEO or SO_RCVTIMEO
*/

int		setsock_timeout(int sock, int type, struct timeval *tout)
{
	if (setsockopt(sock, SOL_SOCKET, type, tout, sizeof(struct timeval)) < 0)
	{
		dprintf(STDERR_FILENO, "Error setsockopt()\n");
		exit(FAILURE);
	}
	return (SUCCESS);
}
