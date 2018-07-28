#include "../../incl/net.h"

int		            ft_domtoip(char *domain, char *addrbuff, size_t addrbuffsz)
{
    struct addrinfo hints;
    struct addrinfo *infoptr;

    ft_memset(&hints, 0, sizeof(hints));
    hints.ai_family = AF_INET;
    if (getaddrinfo(domain, 0, &hints, &infoptr) != 0)
        return (FAILURE);
    inet_ntop(AF_INET, &((struct sockaddr_in *) infoptr->ai_addr)->sin_addr,
              addrbuff, (socklen_t)addrbuffsz);
    freeaddrinfo(infoptr);
    return (SUCCESS);
}