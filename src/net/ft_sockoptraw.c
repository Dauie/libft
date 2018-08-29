/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setsockopt.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 15:40:33 by rlutt             #+#    #+#             */
/*   Updated: 2018/08/23 15:25:46 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/net.h"

int					ft_setsock_hdrincl(int sock)
{
	int				on;

	on = 1;
	if (setsockopt(sock, IPPROTO_IP, IP_HDRINCL, &on, sizeof(on)) < 0)
	{
		dprintf(STDERR_FILENO, "Error setsockopt()\n");
		exit(FAILURE);
	}
	return (SUCCESS);
}
