/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_packet_header.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 17:42:07 by rlutt             #+#    #+#             */
/*   Updated: 2018/08/19 22:26:36 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/ping.h"

void		ft_seticmp_hdr(struct icmp *icmp, int seq, int pid)
{
	icmp->icmp_type = ICMP_ECHO;
	icmp->icmp_code = 0;
	icmp->icmp_hun.ih_idseq.icd_id = htons((uint16_t)pid);
	icmp->icmp_hun.ih_idseq.icd_seq = htons((uint16_t)seq);
}

void		ft_setip_hdr(struct ip *ip, int ttl, int proto, int datalen)
{
	ip->ip_hl = IPV4_HDRLEN / sizeof(uint32_t);
	ip->ip_v = 4;
	ip->ip_tos = 0;
	ip->ip_len = htons(IPV4_HDRLEN + DEF_HDRLEN + sizeof(struct timeval) +
					   datalen);
	ip->ip_id = htons(0);
	ip->ip_off = htons(0);
	ip->ip_ttl = (u_char)ttl;
	ip->ip_p = (u_char)proto;
}

void		ft_setudp_hdr(struct udphdr *udp, int port, int datalen)
{
	udp->uh_dport = htons(port);
	udp->uh_sport = htons(port);
	udp->uh_ulen = htons(sizeof(struct udphdr) + datalen);
	udp->uh_sum = 0;
}

void		ft_setip_dstsrc(struct ip *ip, struct in_addr *src, struct in_addr *dst)
{
	if (src)
		ip->ip_src.s_addr = src->s_addr;
	if (dst)
		ip->ip_dst.s_addr = dst->s_addr;
}
