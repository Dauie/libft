/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checksum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 17:56:44 by rlutt             #+#    #+#             */
/*   Updated: 2018/08/27 13:35:46 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/net_ping.h"
#include <string.h>

u_int16_t			ft_udp_checksum(uint16_t *pkt, unsigned int len,
									in_addr_t src, in_addr_t dst)
{
	u_int16_t		*ipptr;
	u_int32_t		accum;

	accum = ft_checksum(pkt, len, FALSE);
	ipptr = (uint16_t*)&src;
	accum += ntohs(*(ipptr++));
	accum += ntohs(*ipptr);
	ipptr = (uint16_t*)&dst;
	accum += ntohs(*(ipptr++));
	accum += ntohs(*ipptr);
	accum += ntohs(IPPROTO_UDP);
	accum += ntohs(len);
	while (accum >> 16)
		accum = (accum & 0xffff) + (accum >> 16);
	return (ntohs(~accum));
}

u_int16_t			ft_checksum(void *data, unsigned int len, t_bool compliment)
{
	u_int16_t		word;
	u_int32_t		accum;
	size_t			i;

	accum = 0xffff;
	i = 0;
	while (i + 1 < len)
	{
		memcpy(&word, (uint8_t *)data + i, 2);
		accum += ntohs(word);
		if (accum > 0xffff)
			accum -= 0xffff;
		i += 2;
	}
	if (len & 1)
	{
		word = 0;
		memcpy(&word, (uint8_t *)data + len - 1, 1);
		accum += ntohs(word);
		if (accum > 0xffff)
			accum -= 0xffff;
	}
	return (compliment ? ntohs(~accum) : (uint16_t)accum);
}
