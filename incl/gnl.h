/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/31 15:16:54 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/16 12:48:47 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

# define BUFF_SIZE 256

# include <fcntl.h>
# include <unistd.h>
# include "mem.h"
# include "str.h"
# include "char.h"
# include "lst.h"

int					get_next_line(const int fd, char **line);

#endif
