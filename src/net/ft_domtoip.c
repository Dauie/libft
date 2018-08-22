/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_domtoip.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:53:15 by rlutt             #+#    #+#             */
/*   Updated: 2018/08/22 16:10:14 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/net.h"

in_addr_t			ft_domtoip(char *domain, char *addrbuff, int fillbuff)
{
	struct addrinfo	hints;
	struct addrinfo	*infoptr;
	in_addr_t		ret;

	ft_memset(&hints, 0, sizeof(hints));
	hints.ai_family = AF_INET;
	if (getaddrinfo(domain, 0, &hints, &infoptr) != 0)
		return (0);
	ret = ((struct sockaddr_in *)infoptr->ai_addr)->sin_addr.s_addr;
	if (fillbuff == TRUE)
		inet_ntop(AF_INET, &ret, addrbuff, INET_ADDRSTRLEN);
	freeaddrinfo(infoptr);
	return (ret);
}
