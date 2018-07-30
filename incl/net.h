/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   net.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 23:53:41 by rlutt             #+#    #+#             */
/*   Updated: 2018/07/28 02:04:43 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NET_H
#define NET_H

#include "str.h"
#include "mem.h"
#include "return_types.h"
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <ifaddrs.h>
#include <arpa/inet.h>
#include <net/if.h>

# define IPV4_HDRLEN 20
# define IP_MAXPACKET 65535
# define DOMAIN_NAME_LEN 253
# define IPV4_ADDR_LEN 14

int		ft_domtoip(char *domain, char *addrbuff);
int		ft_gethstaddr(char *addrbuff);
int		ft_getifaceaddr(char *ifacename, char *addrbuff);
int 	ft_isaddrset(char *addr);
#endif