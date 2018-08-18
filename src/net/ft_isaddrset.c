/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isaddrset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 18:10:56 by rlutt             #+#    #+#             */
/*   Updated: 2018/08/15 11:28:07 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/net.h"

static struct ifaddrs	*find_addr_inuse(struct ifaddrs *addrs, char *req_addr)
{
	struct sockaddr_in	req;

	if (inet_pton(AF_INET, req_addr, &req.sin_addr) <= 0)
		return (NULL);
	while (addrs)
	{
		if (addrs->ifa_addr && (addrs->ifa_flags & IFF_UP))
		{
			if (((struct sockaddr_in *)addrs->ifa_addr)->sin_addr.s_addr ==
					req.sin_addr.s_addr)
				return (addrs);
		}
		addrs = addrs->ifa_next;
	}
	return (NULL);
}

int						ft_isaddrset(char *reqested_addr)
{
	struct ifaddrs		*addrs;

	if (getifaddrs(&addrs) != 0)
		return (FAILURE);
	if (!(find_addr_inuse(addrs, reqested_addr)))
	{
		freeifaddrs(addrs);
		return (FAILURE);
	}
	freeifaddrs(addrs);
	return (SUCCESS);
}
