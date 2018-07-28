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

int		ft_gethstaddr(char *addrbuff, size_t buffsz)
{
    struct ifaddrs	*addrs;
    struct ifaddrs	*src;

    if (getifaddrs(&addrs) != 0 || !(src = find_useable(addrs)))
        return (FAILURE);
    inet_ntop(AF_INET, &((struct sockaddr_in *) src->ifa_addr)->sin_addr,
              addrbuff, (socklen_t)buffsz);
    freeifaddrs(addrs);
    return (SUCCESS);
}