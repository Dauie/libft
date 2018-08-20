/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_domtoip.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:53:15 by rlutt             #+#    #+#             */
/*   Updated: 2018/08/19 22:36:25 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/net.h"

struct in_addr		*ft_domtoip(char *domain, char *addrbuff, int fillbuff)
{
	struct addrinfo	hints;
	struct addrinfo	*infoptr;
	struct in_addr *ret;

	if (!(ret = ft_memalloc(sizeof(struct in_addr))))
		return (NULL);
	ft_memset(&hints, 0, sizeof(hints));
	hints.ai_family = AF_INET;
	if (getaddrinfo(domain, 0, &hints, &infoptr) != 0)
		return (NULL);
	*ret = ((struct sockaddr_in *)infoptr->ai_addr)->sin_addr;
	if (fillbuff == TRUE)
		inet_ntop(AF_INET, &ret, addrbuff, INET_ADDRSTRLEN);
	freeaddrinfo(infoptr);
	return (ret);
}
