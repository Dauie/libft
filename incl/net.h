/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   net.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 23:53:41 by rlutt             #+#    #+#             */
/*   Updated: 2018/08/19 22:26:36 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NET_H
# define NET_H

# include "str.h"
# include "mem.h"
# include "return_types.h"
# include "bool.h"

# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/socket.h>
# include <netdb.h>
# include <ifaddrs.h>
# include <arpa/inet.h>
# include <net/if.h>

# define IPV4_HDRLEN 20
# define IP_MAXPACKET 65535
# define DOMAIN_NAME_LEN 253

struct in_addr		*ft_domtoip(char *domain, char *addrbuff, int fillbuff);
struct in_addr		*ft_gethstaddr(char *addrbuff, int fillbuff);
struct in_addr		*ft_getifaceaddr(char *ifacename, char *addrbuff,
									int fill_buff);
int					ft_isaddrset(char *addr);
#endif
