/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tbl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlutt <rlutt@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 20:07:17 by rlutt             #+#    #+#             */
/*   Updated: 2017/02/16 12:52:13 by rlutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TBL_H
# define TBL_H

# include "mem.h"

int					ft_cntspc(char *str);
size_t				ft_tbllen(char **tbl);
size_t				ft_itbllen(int **tbl);
void				ft_tbldel(char **tbl);
char				**tblcnew(size_t len);
long				**tblnnew(size_t len);

#endif
