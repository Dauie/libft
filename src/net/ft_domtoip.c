/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_domtoip.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:53:15 by rlutt             #+#    #+#             */
/*   Updated: 2018/08/25 15:14:36 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/net.h"

in_addr_t			ft_domtoip(char *domain, char *addrbuff)
{
	struct addrinfo	hints;
	struct addrinfo	*infoptr;
	in_addr_t		ret;

	ft_memset(&hints, 0, sizeof(hints));
	hints.ai_family = AF_INET;
	if (getaddrinfo(domain, 0, &hints, &infoptr) != 0)
		return (0);
	ret = ((struct sockaddr_in *)infoptr->ai_addr)->sin_addr.s_addr;
	if (addrbuff)
		inet_ntop(AF_INET, &ret, addrbuff, INET_ADDRSTRLEN);
	freeaddrinfo(infoptr);
	return (ret);
}

int					ft_iptodom(in_addr_t ip, char *dombuff)
{
	struct sockaddr_in addr;

	addr.sin_addr.s_addr = ip;
	addr.sin_family = AF_INET;
	if (getnameinfo((struct sockaddr *)&addr, sizeof(struct sockaddr),
			dombuff, DOMAIN_NAME_LEN, NULL, 0, 0) == 0)
		return (FAILURE);
	return (SUCCESS);
}
