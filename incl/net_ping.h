/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   net-ping.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 16:03:04 by rlutt             #+#    #+#             */
/*   Updated: 2018/08/22 16:07:22 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NET_PING_H
# define NET_PING_H

# include "net.h"

# include <sys/time.h>
# include <netinet/ip.h>
# include <netinet/ip_icmp.h>
# include <netinet/udp.h>

# define ICMP_HDRLEN 8
# define UDP_HDRLEN 8
# define DEF_HDRLEN 8

typedef union			u_echohdr
{
	struct icmp			icmp;
	struct udphdr		udp;
}						t_echohdr;

typedef struct			s_echopkt
{
	struct ip			iphdr;
	t_echohdr			phdr;
	uint8_t				*data;
	u_short				datalen;
	struct timeval		sent;
	struct timeval		recvd;
}						t_echopkt;

int						ft_makerawsock(int proto);
int						ft_sock_hdrincl(int sock);
void					ft_seticmp_hdr(struct icmp *icmp, int seq, int pid);
void					ft_setip_hdr(struct ip *ip, int ttl, int proto,
								int datalen);
void					ft_setip_dstsrc(struct ip *ip, struct in_addr *src,
									struct in_addr *dst);
void					ft_setudp_hdr(struct udphdr *udp, int port,
									int datalen);

#endif
