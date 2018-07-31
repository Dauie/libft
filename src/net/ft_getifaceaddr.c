#include "../../incl/net.h"

static struct ifaddrs	*find_iface(struct ifaddrs *addrs, char *ifacename)
{
	while (addrs)
	{
		if (addrs->ifa_addr && (addrs->ifa_flags & IFF_UP))
		{
			if (addrs->ifa_addr->sa_family == AF_INET &&
					(ft_strncmp(addrs->ifa_name, ifacename, ft_strlen(ifacename)) == 0))
				return (addrs);
		}
		addrs = addrs->ifa_next;
	}
	return (NULL);
}

int		ft_getifaceaddr(char *ifacename, char *addrbuff)
{
	struct ifaddrs	*addrs;
	struct ifaddrs	*src;

	if (getifaddrs(&addrs) != 0 || !(src = find_iface(addrs, ifacename)))
		return (FAILURE);
	inet_ntop(AF_INET, &((struct sockaddr_in *) src->ifa_addr)->sin_addr,
			  addrbuff, INET_ADDRSTRLEN);
	freeifaddrs(addrs);
	return (SUCCESS);
}