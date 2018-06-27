/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/31 15:16:54 by rlutt             #+#    #+#             */
/*   Updated: 2018/06/26 10:58:04 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

# define BUFF_SIZE 256

# include <fcntl.h>
# include <unistd.h>
# include "char.h"
# include "bool.h"
# include "cnvrsn.h"
# include "gnl.h"
# include "lst.h"
# include "mem.h"
# include "num.h"
# include "printf.h"
# include "put.h"
# include "str.h"
# include "tbl.h"

int				gnl(const int fd, char **line);

#endif
