#include "../../incl/net.h"

static struct ifaddrs	*find_useable(struct ifaddrs *addrs)
{
	while (addrs)
	{
		if (addrs->ifa_addr && (addrs->ifa_flags & IFF_UP))
		{
			if (addrs->ifa_addr->sa_family == AF_INET &&
					((struct sockaddr_in *)addrs->ifa_addr)->sin_addr.s_addr != htonl(2130706433UL))
				return (addrs);
		}
		addrs = addrs->ifa_next;
	}
	return (NULL);
}

int		ft_gethstaddr(char *addrbuff)
{
	struct ifaddrs	*addrs;
	struct ifaddrs	*src;

	if (getifaddrs(&addrs) != 0)
		return (FAILURE);
	if (!(src = find_useable(addrs)))
	{
		freeifaddrs(addrs);
		exit(FAILURE);
	}
	inet_ntop(AF_INET, &((struct sockaddr_in *) src->ifa_addr)->sin_addr,
			addrbuff, INET_ADDRSTRLEN);
	freeifaddrs(addrs);
	return (SUCCESS);
}