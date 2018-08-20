#ifndef PING_H
#define PING_H

#include "net.h"

# include <sys/time.h>
# include <netinet/ip.h>
# include <netinet/ip_icmp.h>
# include <netinet/udp.h>

# define ICMP_HDRLEN 8
# define UDP_HDRLEN 8
# define DEF_HDRLEN 8

typedef union			s_echohdr
{
	struct icmp			icmp;
	struct udphdr		udp;
}						t_echohdr;

typedef struct			s_echopkt
{
	struct ip			iphdr;
	t_echohdr			phdr;
	struct timeval		time;
	uint8_t				data[256];
	u_short				datalen;
}						t_echopkt;

typedef struct			s_echoreq
{

}						t_echoreq;

int					ft_makerawsock(int proto);
int					ft_sockoptraw(int sock);
void				ft_seticmp_hdr(struct icmp *icmp, int seq, int pid);
void				ft_setip_hdr(struct ip *ip, int ttl, int proto,
								 int datalen);
void				ft_setip_dstsrc(struct ip *ip, struct in_addr *src,
									struct in_addr *dst);
void				ft_setudp_hdr(struct udphdr *udp, int port, int datalen);

#endif