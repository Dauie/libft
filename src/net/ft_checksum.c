/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checksum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 17:56:44 by rlutt             #+#    #+#             */
/*   Updated: 2018/08/25 17:57:29 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/net.h"

u_int16_t			ft_icmp_checksum(void *data, unsigned int len)
{
	u_int16_t		word;
	u_int32_t		accum;
	size_t			i;

	accum = 0xffff;
	i = 0;
	while (i + 1 < len)
	{
		ft_memcpy(&word, (uint8_t *)data + i, 2);
		accum += ntohs(word);
		if (accum > 0xffff)
			accum -= 0xffff;
		i += 2;
	}
	if (len & 1)
	{
		word = 0;
		ft_memcpy(&word, (uint8_t *)data + len - 1, 1);
		accum += ntohs(word);
		if (accum > 0xffff)
			accum -= 0xffff;
	}
	return ((uint16_t)~accum);
}

u_int16_t			ft_udp_checksum(uint16_t *pkt, size_t len, in_addr_t src, in_addr_t dst)
{
	u_int32_t		accum;
	u_int16_t		word;
	u_int16_t		*ipptr;
	size_t			i;

	accum = 0xffff;
	i = 0;
	while (i + 1 < len)
	{
		ft_memcpy(&word, (uint8_t *)pkt + i, 2);
		accum += ntohs(word);
		if (accum > 0xffff)
			accum -= 0xffff;
		i += 2;
	}
	if (len & 1)
	{
		word = 0;
		ft_memcpy(&word, (uint8_t *)pkt + len - 1, 1);
		accum += ntohs(word);
		if (accum > 0xffff)
			accum -= 0xffff;
	}
	ipptr = (uint16_t*)&src;
	accum += *(ipptr++);
	accum += *ipptr;
	ipptr = (uint16_t*)&dst;
	accum += *(ipptr++);
	accum += *ipptr;
	accum += htons(IPPROTO_UDP);
	accum += htons(len);
	while (accum >> 16)
		accum = (accum & 0xffff) + (accum >> 16);
	return ((uint16_t)~accum);
}