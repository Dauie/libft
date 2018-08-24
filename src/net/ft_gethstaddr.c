/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gethstaddr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 18:05:01 by rlutt             #+#    #+#             */
/*   Updated: 2018/08/23 00:14:12 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/net.h"

static struct ifaddrs	*find_useable(struct ifaddrs *addrs)
{
	while (addrs)
	{
		if (addrs->ifa_addr && (addrs->ifa_flags & IFF_UP))
		{
			if (addrs->ifa_addr->sa_family == AF_INET &&
					((struct sockaddr_in *)addrs->ifa_addr)->sin_addr.s_addr !=
					htonl(2130706433UL))
				return (addrs);
		}
		addrs = addrs->ifa_next;
	}
	return (NULL);
}

in_addr_t				ft_gethstaddr(char *addrbuff, int fillbuff)
{
	struct ifaddrs		*addrs;
	struct ifaddrs		*src;
	in_addr_t			ret;

	if (getifaddrs(&addrs) != 0)
		return (0);
	if (!(src = find_useable(addrs)))
		exit(FAILURE);
	ret = ((struct sockaddr_in *)src->ifa_addr)->sin_addr.s_addr;
	if (fillbuff == TRUE)
		inet_ntop(AF_INET, &ret, addrbuff, INET_ADDRSTRLEN);
	freeifaddrs(addrs);
	return (ret);
}
