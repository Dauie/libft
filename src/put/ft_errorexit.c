/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errorexit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 21:40:18 by rlutt             #+#    #+#             */
/*   Updated: 2018/08/19 22:26:36 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incl/put.h"

int			ft_errorexit(char *errstr, int errcode)
{
	dprintf(STDERR_FILENO, "%s\n", errstr);
	exit(errcode);
}
