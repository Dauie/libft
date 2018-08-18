/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_domtoip.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 17:53:15 by rlutt             #+#    #+#             */
/*   Updated: 2018/08/15 11:28:07 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/net.h"

int					ft_domtoip(char *domain, char *addrbuff)
{
	struct addrinfo	hints;
	struct addrinfo	*infoptr;

	ft_memset(&hints, 0, sizeof(hints));
	hints.ai_family = AF_INET;
	if (getaddrinfo(domain, 0, &hints, &infoptr) != 0)
		return (FAILURE);
	inet_ntop(AF_INET, &((struct sockaddr_in *)infoptr->ai_addr)->sin_addr,
			addrbuff, INET_ADDRSTRLEN);
	freeaddrinfo(infoptr);
	return (SUCCESS);
}
